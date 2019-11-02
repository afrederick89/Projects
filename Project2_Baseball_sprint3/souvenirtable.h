#ifndef SOUVENIRTABLE_H
#define SOUVENIRTABLE_H

#include <QAbstractTableModel>
#include <QSortFilterProxyModel>
#include <QDebug>
#include "teamtablemodel.h"
struct Souvenir {
    const static int COLUMN_COUNT = 3;
    Souvenir(QString teamName, QString stadiumName, QString itemName, double itemCost){
        this->teamName = teamName;
        this->stadiumName = stadiumName;
        this->itemName = itemName;
        this->itemCost = itemCost;
    }
    Souvenir() {}
    QString teamName;
    QString stadiumName;
    QString itemName;
    double itemCost;
};

class SouvenirTable : public QAbstractTableModel
{
    Q_OBJECT

public:
    SouvenirTable(QObject *parent = 0);
    SouvenirTable(const QList<Souvenir>& souvenirList,
                  QObject *parent = 0);

    QVariant headerData(int section, Qt::Orientation orientation, int role = Qt::DisplayRole) const override;

    int rowCount(const QModelIndex &parent = QModelIndex()) const override;
    int columnCount(const QModelIndex &parent = QModelIndex()) const override;

    QVariant data(const QModelIndex &index, int role = Qt::DisplayRole) const override;

private:
    QList<Souvenir> souvenirList;
};

#endif // SOUVENIRTABLE_H
