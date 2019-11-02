#ifndef STADIUMTABLE_H
#define STADIUMTABLE_H

#include <QAbstractTableModel>
#include <QSortFilterProxyModel>
#include <QDebug>

struct Stadium{
    const static int COLUMN_COUNT = 9;
    explicit Stadium(QString stadiumName, long seatingCapacity, QString location, QString playingSurface, QString league, int dateOpened, int distanceToCF, QString ballparkTopology, QString roofType){
        this->stadiumName = stadiumName;
        this->seatingCapacity = seatingCapacity;
        this->location = location;
        this->playingSurface = playingSurface;
        this->league = league;
        this->dateOpened = dateOpened;
        this->distanceToCenterField = distanceToCF;
        this->ballparkTopology = ballparkTopology;
        this->roofType = roofType;
    }
    QString stadiumName;
    int seatingCapacity;
    QString location;
    QString playingSurface;
    QString league;
    int dateOpened;
    int distanceToCenterField;
    QString ballparkTopology;
    QString roofType;
};
class StadiumTable : public QAbstractTableModel
{
    Q_OBJECT

public:
    StadiumTable(QObject *parent = 0);
    StadiumTable(const QList<Stadium>& stadiumList,
                 QObject *parent = 0);

    QVariant headerData(int section, Qt::Orientation orientation, int role = Qt::DisplayRole) const override;

    // Basic functionality:
    int rowCount(const QModelIndex &parent = QModelIndex()) const override;
    int columnCount(const QModelIndex &parent = QModelIndex()) const override;

    QVariant data(const QModelIndex &index, int role = Qt::DisplayRole) const override;

private:
    QList<Stadium> stadiumList;
};

#endif // STADIUMTABLE_H
