#include "teamtablemodel.h"
TeamTableModel::TeamTableModel(QObject *parent)
    : QAbstractTableModel(parent)
{
}

TeamTableModel::TeamTableModel(const QList<Team> &teamList,
                                           QObject* parent):
    QAbstractTableModel(parent)
{
    this->teamList = teamList;
}

int TeamTableModel::columnCount(const QModelIndex &parent) const
{
    Q_UNUSED(parent);
    return Team::COLUMN_COUNT;
}

int TeamTableModel::rowCount(const QModelIndex &parent) const
{
    Q_UNUSED(parent);
    return teamList.size();
}
QVariant TeamTableModel::data (const QModelIndex & index,
               int role) const {
    // used for distance to CF formatting
    const double METERS_PER_FOOT = 0.3048;

    if (!index.isValid())
        return QVariant();
    if (index.row() >= teamList.size() || index.row() < 0)
        return QVariant();

    if (role == Qt::DisplayRole) {
        // Team's capacity is stored as integer in database, converted to formatted string here :)
        const Team& team = teamList.at(index.row());
        QLocale::setDefault(QLocale(QLocale::English, QLocale::UnitedStates));
        QLocale aEnglish;

        QString formattedCapacity = aEnglish.toString(team.seatingCapacity);

        switch (index.column()) {
        case 0:
            return team.teamName;
        case 1:
            return team.stadiumName;
        case 2:
            // Adds comma separated numbers
            return formattedCapacity;
        case 3:
            return team.location;
        case 4:
            return team.playingSurface;
        case 5:
            return team.league;
        case 6:
            return team.dateOpened;
        case 7:
            // this way we can store the distance to center field as an integer, and output it to the tableView as a QString :)
            return QString(QString::number(team.distanceToCenterField) + " feet (" + QString::number(team.distanceToCenterField*METERS_PER_FOOT, 'f', 0) + " meters)");
        case 8:
            return team.ballparkTopology;
        case 9:
            return team.roofType;

        default:
            return QVariant();
        }
    }

    else if (role == Qt::TextAlignmentRole){
            return Qt::AlignCenter;
    }
    return QVariant();
}
/*******************************************************************************
 * This is how each team and corresponding stadium is defined up in the table
 * CREATE TABLE `mlb_info` (
    `team_name`	text,
    `stadium_name`	text,
    `seating_capacity`	double,
    `location`	text,
    `playing_surface`	text,
    `league`	text,
    `date_opened`	int,
    `distance_to_center_field`	text,
    `ballpark_topology`	text,
    `roof_type`	text
);
********************************************************************************/

QVariant TeamTableModel::headerData(int section, Qt::Orientation orientation, int role) const {
    if (role != Qt::DisplayRole)
        return QVariant();

    if (orientation == Qt::Horizontal) {
        switch (section) {
        case 0:
            return tr("Team Name");
        case 1:
            return tr("Stadium Name");
        case 2:
            return tr("Seating Capacity");
        case 3:
            return tr("Location");
        case 4:
            return tr("Playing Surface");
        case 5:
            return tr("League");
        case 6:
            return tr("Date Opened");
        case 7:
            return tr("Distance to Centerfield");
        case 8:
            return tr("Field Topology");
        case 9:
            return tr("Roof Type");
        default:
            return QVariant();
        }
    }
    return section + 1;
}








