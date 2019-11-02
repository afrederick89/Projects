#include "stadiumtable.h"

StadiumTable::StadiumTable(QObject *parent)
    : QAbstractTableModel(parent)
{
}

StadiumTable::StadiumTable(const QList<Stadium> &stadiumList,
                                           QObject* parent):
    QAbstractTableModel(parent)
{
    this->stadiumList = stadiumList;
}
int StadiumTable::rowCount(const QModelIndex &parent) const
{
    Q_UNUSED(parent);
    return stadiumList.size();
}

int StadiumTable::columnCount(const QModelIndex &parent) const
{
    Q_UNUSED(parent);
    return Stadium::COLUMN_COUNT;
}
QVariant StadiumTable::headerData(int section, Qt::Orientation orientation, int role) const
{
    if (role != Qt::DisplayRole)
        return QVariant();

    if (orientation == Qt::Horizontal) {
        switch (section) {
        case 0:
            return tr("Stadium Name");
        case 1:
            return tr("Seating Capacity");
        case 2:
            return tr("Location");
        case 3:
            return tr("Playing Surface");
        case 4:
            return tr("League");
        case 5:
            return tr("Date Opened");
        case 6:
            return tr("Distance to Centerfield");
        case 7:
            return tr("Field Topology");
        case 8:
            return tr("Roof Type");
        default:
            return QVariant();
        }
    }
}



QVariant StadiumTable::data(const QModelIndex &index,
                            int role) const{
    const double METERS_PER_FOOT = 0.3048;
    if (!index.isValid())
        return QVariant();
    if (index.row() >= stadiumList.size() || index.row() < 0)
        return QVariant();

    if (role == Qt::DisplayRole) {
        // Team's capacity is stored as integer in database, converted to formatted string here :)
        const Stadium& stadium = stadiumList.at(index.row());
        QLocale::setDefault(QLocale(QLocale::English, QLocale::UnitedStates));
        QLocale aEnglish;
        QString formattedCapacity = aEnglish.toString(stadium.seatingCapacity);
        switch (index.column()) {
        case 0:
            return stadium.stadiumName;
        case 1:
            // Adds comma separated numbers
            return formattedCapacity;
        case 2:
            return stadium.location;
        case 3:
            return stadium.playingSurface;
        case 4:
            return stadium.league;
        case 5:
            return stadium.dateOpened;
        case 6:
            return QString(QString::number(stadium.distanceToCenterField) + " feet (" + QString::number(stadium.distanceToCenterField*METERS_PER_FOOT, 'f', 0) + " meters)");
        case 7:
            return stadium.ballparkTopology;
        case 8:
            return stadium.roofType;
        default:
            return QVariant();
        }
    }

    else if (role == Qt::TextAlignmentRole){
            return Qt::AlignCenter;
    }
    return QVariant();
}
