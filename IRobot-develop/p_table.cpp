#include "p_table.h"

P_Table::P_Table(QVector<Purchases> &inPurchase, QString inUser)
    : QAbstractTableModel()
{
    p_data = inPurchase;
    valid_User = inUser;
}

QVariant P_Table::headerData(int section, Qt::Orientation orientation, int role) const
{
    if (role == Qt::DisplayRole){
            if (orientation == Qt::Horizontal){
                switch (section){
                   case 0: return QString("Customer");
                   case 1: return QString("Product");
                   case 2: return QString("Quantity");
                   case 3: return QString("Maintenance Plan");
                   case 4: return QString("Plan Cost");
                   case 5: return QString("Total Cost");
                }
            }
        }
        return QVariant();
}

int P_Table::rowCount(const QModelIndex &) const
{
        return p_data.size();
}

int P_Table::columnCount(const QModelIndex&) const
{
        return 6;

}

QVariant P_Table::data(const QModelIndex &index, int role) const
{
    int r = index.row();
    int c = index.column();
    QString tName;
    QString tProduct;
    int tQty;
    QString tPlan;
    double tPlanCost;
    double tTotalCost;
    if(p_data.size() > 0){
            tName = p_data[r].cName;
            tProduct = p_data[r].pProduct;
            tQty = p_data[r].pQty;
            tPlan = p_data[r].planName;
            tPlanCost = p_data[r].planCost;
            tTotalCost = p_data[r].total_Cost;
    }
    if (role == Qt::DisplayRole) {
        switch(c){
            case 0: return tName;
            case 1: return tProduct;
            case 2: return tQty;
            case 3: return tPlan;
            case 4: return tPlanCost;
            case 5: return tTotalCost;
        }
    }

    return QVariant();
}
