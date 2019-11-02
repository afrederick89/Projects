#ifndef CUSTOMER_PURCHASETABLE_H
#define CUSTOMER_PURCHASETABLE_H

#include <QAbstractTableModel>
#include <datamanager.h>

class Customer_purchasetable : public QAbstractTableModel
{
    Q_OBJECT

public:
    explicit Customer_purchasetable(DataManager *inDm, QString &inUser);

    // Header:
    QVariant headerData(int section, Qt::Orientation orientation, int role = Qt::DisplayRole) const override;

    // Basic functionality:
    int rowCount(const QModelIndex &parent = QModelIndex()) const override;
    int columnCount(const QModelIndex &parent = QModelIndex()) const override;

    QVariant data(const QModelIndex &index, int role = Qt::DisplayRole) const override;

private:
    DataManager *DM;
    QString user;
    QVector<Purchases> P_Data;
};

#endif // CUSTOMER_PURCHASETABLE_H
