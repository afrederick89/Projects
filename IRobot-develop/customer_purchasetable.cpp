#include "customer_purchasetable.h"

Customer_purchasetable::Customer_purchasetable(DataManager *inDM, QString &inUser)
{
    DM = inDM;
    user = inUser;
    DM->getPurchases(P_Data);
    for(auto it=P_Data.begin();it!=P_Data.end();++it){
        if(it->cName != user){
            P_Data.erase(it);
        }
    }
}

QVariant Customer_purchasetable::headerData(int section, Qt::Orientation orientation, int role) const
{
    if(role == Qt::DisplayRole) {
        if(orientation == Qt::Horizontal){
            switch(section){
              case 0: return QString("Customer");
              case 1: return QString("Product");
              case 2: return QString("Quantity");
              case 3: return QString("Maintenance Plan");
              case 4: return QString("Plan Cost");
              case 5: return QString("Total Cost");
            }
        }
    }
    return true;
}

int Customer_purchasetable::rowCount(const QModelIndex &parent) const
{
        return P_Data.size();
}

int Customer_purchasetable::columnCount(const QModelIndex &parent) const
{

        return 6;


}

QVariant Customer_purchasetable::data(const QModelIndex &index, int role) const
{
    int r = index.row();
    int c = index.column();
    QString tName;
    QString tProduct;
    int tQty;
    QString tPlan;
    double tPlanCost;
    double tTotalCost;
      if(user == P_Data[r].cName){
          tName = P_Data[r].cName;
          tProduct = P_Data[r].pProduct;
          tQty = P_Data[r].pQty;
          tPlan = P_Data[r].planName;
          tPlanCost = P_Data[r].planCost;
          tTotalCost = P_Data[r].total_Cost;
        }
      if(role == Qt::DisplayRole){
          switch(c){
            case 0 : return tName;
            case 1 : return tProduct;
            case 2 : return tQty;
            case 3 : return tPlan;
            case 4 : return tPlanCost;
            case 5 : return tTotalCost;
          }
      }


    return QVariant();
}
