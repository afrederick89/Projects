#include <sqlmanager.h>

SQLManager::SQLManager(QString &path)
{
    m_db = QSqlDatabase::addDatabase("QSQLITE");
    m_db.setDatabaseName(path);

        if(!m_db.open())
        {
            qDebug() << "Error: connection with database failed";
        }
        else
        {
            qDebug() << "Database: connection with database good";
    }
}

SQLManager::~SQLManager(){
    m_db.close();
}

bool SQLManager::loadAdminLogins(QVector<Login>& vlogin){
    Login tempLogin;
    QSqlQuery query("SELECT * FROM adminLogin");
    query.exec();

      while(query.next())
      {
          tempLogin.logID = query.value(0).toInt();
          tempLogin.logName = query.value(1).toString();
          tempLogin.logPass = query.value(2).toString();

          vlogin.append(tempLogin);
      }
      return vlogin.size() > 0;
}
bool SQLManager::loadCustLogins(QVector<Login>& vlogin){
    Login tempLogin;
    QSqlQuery query("SELECT * FROM customerLogin");
      while(query.next())
      {
          tempLogin.logID = query.value(0).toInt();
          tempLogin.logName = query.value(1).toString();
          tempLogin.logPass = query.value(2).toString();

          vlogin.append(tempLogin);
      }
      return vlogin.size() > 0;

}
bool SQLManager::loadCurrentCustomer(QVector<curCustomer>& vCCust){
    curCustomer tempCustomer;
    QSqlQuery query("SELECT * FROM currentCustomer");

    while(query.next()) {
        tempCustomer.idNum = query.value(0).toInt();
        tempCustomer.cName = query.value(1).toString();
        tempCustomer.cAddress = query.value(2).toString();
        tempCustomer.cInterest = query.value(3).toString();
        tempCustomer.cPriority = query.value(4).toString();

        vCCust.append(tempCustomer);
    }
    return vCCust.size() > 0;
}
bool SQLManager::loadPotentialCustomer(QVector<potCustomer>& vPCust){
    potCustomer tempCustomer;
    QSqlQuery query("SELECT * FROM PotentialCustomer");

    while(query.next()){
        tempCustomer.idNum = query.value(0).toInt();
        tempCustomer.cName = query.value(1).toString();
        tempCustomer.cAddress = query.value(2).toString();
        tempCustomer.cInterest = query.value(3).toString();
        tempCustomer.cPriority = query.value(4).toString();

        vPCust.append(tempCustomer);
    }
    return vPCust.size() > 0;
}
bool SQLManager::loadProducts(QVector<curProducts>& vproducts){
    curProducts tempProduct;
    QSqlQuery query("SELECT * FROM products");

    while(query.next()){
        tempProduct.pID = query.value(0).toInt();
        tempProduct.pName = query.value(1).toString();
        tempProduct.pPrice = query.value(2).toDouble();

        vproducts.append(tempProduct);
    }
    return vproducts.size() > 0;
}
bool SQLManager::loadMaintenancePlans(QVector<MaintPlan>& vMaintPlan){
     MaintPlan tempPlan;
     QSqlQuery query("SELECT * FROM maintPlan");

     while(query.next()){
         tempPlan.mpLength = query.value(0).toString();
         tempPlan.mpCost = query.value(1).toDouble();

         vMaintPlan.append(tempPlan);
     }
     return vMaintPlan.size() > 0;

}
bool SQLManager::loadPurchases(QVector<Purchases>& vPurchases){
    Purchases tempPurchase;
    QSqlQuery query("SELECT * FROM PurchaseOrders");

    while(query.next()){
        tempPurchase.cName = query.value(0).toString();
        tempPurchase.pProduct = query.value(1).toString();
        tempPurchase.pQty = query.value(2).toInt();
        tempPurchase.planName = query.value(3).toString();
        tempPurchase.planCost = query.value(4).toDouble();
        tempPurchase.total_Cost = query.value(5).toDouble();
        vPurchases.push_back(tempPurchase);
    }
    return vPurchases.size() > 0;
}

bool SQLManager::loadTestimonials(QVector<Testimonial>& vReviews){
    Testimonial tempTest;
    QSqlQuery query("SELECT * FROM Testimonial");

    while(query.next()){
        tempTest.tName = query.value(0).toString();
        tempTest.review = query.value(1).toString();
        tempTest.revDate = query.value(2).toString();

        vReviews.push_back(tempTest);
    }
    return vReviews.size() > 0;
}

bool SQLManager::addTestimonial(Testimonial &inReview){
    bool success = false;
    QSqlQuery query;
    query.prepare("INSERT INTO Testimonial (Customer, Testimonial, Date)"
                  "VALUES (:Customer, :Testimonial, :Date)");
    query.bindValue(":Customer", inReview.tName);
    query.bindValue(":Testimonial", inReview.review);
    query.bindValue(":Date", inReview.revDate);
    if(query.exec())
          {
              success = true;
          }
          else
          {
               qDebug() << "Testimonial Error,  "
                        << query.lastError();
          }

   return success;
}

bool SQLManager::addPurchase(Purchases &inPurchase){
    bool success = false;
    QSqlQuery query;
    query.prepare("INSERT INTO PurchaseOrders (Customer, Product, Quantity, MaintenancePlan, PlanCost, TotalCost)"
                  "VALUES (:Customer, :Product, :Quantity, :MaintenancePlan, :PlanCost, :TotalCost)");
    query.bindValue(":Customer", inPurchase.cName);
    query.bindValue(":Product", inPurchase.pProduct);
    query.bindValue(":Quantity", inPurchase.pQty);
    query.bindValue(":MaintenancePlan", inPurchase.planName);
    query.bindValue(":PlanCost", inPurchase.planCost);
    query.bindValue(":TotalCost", inPurchase.total_Cost);
    if(query.exec())
          {
              success = true;
          }
          else
          {
               qDebug() << "Add Purchase error:  "
                        << query.lastError();
          }

    return success;
}

bool SQLManager::deleteCustomerFromDb(curCustomer &customer)
{
    bool success = false;
    QSqlQuery query;

    query.bindValue(":customerName", customer.cName);
    if(query.exec("DELETE FROM currentCustomer WHERE customerName = '" + customer.cName + "'")){
        success = true;
    } else {
        qDebug() << "Delete customer error:  "
        << query.lastError();
    }
    return success;
}

bool SQLManager::addCustomer(curCustomer &customer)
{

    bool success = false;
    QSqlQuery query;


    query.prepare("INSERT INTO currentCustomer(customerName, customerAddress, customerPurchases, customerImportance)"
               "VALUES (:customerName, :customerAddress, :customerPurchases, :customerImportance)" );
    query.bindValue(":customerName", customer.cName);
    query.bindValue(":customerAddress", customer.cAddress);
    query.bindValue(":customerPurchases", customer.cInterest);
    query.bindValue(":customerImportance", customer.cPriority);
    if(query.exec()){
        success = true;
    } else {
        qDebug() << "Add Purchase error:  "
        << query.lastError();
    }
    return success;
}
bool SQLManager::addPotentialCustomer(potCustomer &inPotCustomer){
    bool success = false;
    QSqlQuery query;
    query.prepare("INSERT INTO potentialCustomer (customerName, customerAddress, customerInterest, customerImportance)"
                  " VALUES (:customerName, :customerAddress, :customerInterest, :customerImportance)");
    query.bindValue(":customerName", inPotCustomer.cName);
    query.bindValue(":customerAddress", inPotCustomer.cAddress);
    query.bindValue(":customerInterest", inPotCustomer.cInterest);
    query.bindValue(":customerImportance", inPotCustomer.cPriority);
    if (query.exec()){
        success = true;
    }else{
        qDebug() << "error adding customer: " << query.lastError();
    }
    return success;
}
