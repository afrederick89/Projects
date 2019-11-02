#ifndef P_TABLE_H
#define P_TABLE_H
#include <datamanager.h>
#include <QAbstractTableModel>
/** \class P_Table
 * P_Table class - populates purchase table with purchases the customer has made from the DB
 */
class P_Table : public QAbstractTableModel
{
    Q_OBJECT

public:
    explicit P_Table(QVector<Purchases> &inPurchase, QString inUser); ///Constructor with the username and purchase data
    QVariant headerData(int section, Qt::Orientation orientation, int role = Qt::DisplayRole) const override; ///Sets the header data

    int rowCount(const QModelIndex &parent = QModelIndex()) const override; ///Sets row count
    int columnCount(const QModelIndex &parent = QModelIndex()) const override; ///Sets column count

    QVariant data(const QModelIndex &index, int role = Qt::DisplayRole) const override; ///Sets purchase data

private:
    QVector<Purchases> p_data; ///Vector of this customers purchases
    QString valid_User; ///this customers username
};

#endif // P_TABLE_H
