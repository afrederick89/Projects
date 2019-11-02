#include <datamanager.h>
#include <cassert>

DataManager::DataManager(QString &path)
{
    DB = new SQLManager(path);
    loadData();
}

void DataManager::loadData()
{

    DB->loadAdminLogins(DMAdminLogin);
    DB->loadCustLogins(DMCustLogin);
    DB->loadCurrentCustomer(DMCustomer);
    DB->loadMaintenancePlans(DMPlans);
    DB->loadPotentialCustomer(DMpotCustomer);
    DB->loadProducts(DMProducts);
    DB->loadPurchases(DMPurchases);
    DB->loadTestimonials(DMReviews);
}

bool DataManager::validateAdmin(QString UN, QString PW){
    bool success = true;
    for(auto it=DMAdminLogin.begin();it!=DMAdminLogin.end();++it){
        if(UN != it->logName && PW != it->logPass){
            success = false;
        }
    }
    return success;
}

bool DataManager::validateCustomer(QString UN, QString PW){
    bool success = false;
    for(auto it=DMCustLogin.begin();it!=DMCustLogin.end();++it){
        if(UN == it->logName && PW == it->logPass){
            success = true;
        }
    }
    return success;
}
void DataManager::getProducts(QVector<curProducts> &inProducts){
    inProducts = DMProducts;
}
void DataManager::getPlans(QVector<MaintPlan> &inPlan){
    inPlan = DMPlans;
}
void DataManager::getPurchases(QVector<Purchases> &inPurchases){
    inPurchases = DMPurchases;
}
void DataManager::getReviews(QVector<Testimonial> &inReview){
    inReview = DMReviews;
}
void DataManager::placeOrder(QVector<Purchases> &inPurchase){
    Purchases temp;
    for(auto it=inPurchase.begin();it!=inPurchase.end();++it){
        temp.cName=it->cName;
        temp.pProduct=it->pProduct;
        temp.pQty=it->pQty;
        temp.planName=it->planName;
        temp.planCost=it->planCost;
        temp.total_Cost=it->total_Cost;
        DB->addPurchase(temp);
    }
}

QVector<curCustomer> DataManager::getCurrentCustomers()
{
    return this->DMCustomer;
}

QVector<Purchases> DataManager::getPurchases()
{
    return DMPurchases;
}

void DataManager::addCustomerToCurrentCustomers(curCustomer &customer)
{
    this->DMCustomer.push_back(customer);
}

void DataManager::deleteCustomer(int idx)
{
    DMCustomer.erase(DMCustomer.begin()+idx);
}

void DataManager::replaceCustomer(curCustomer c, int idx)
{
    DMCustomer[idx] = c;
}

bool DataManager::deleteCustomerFromDb(curCustomer customer)
{
    return DB->deleteCustomerFromDb(customer);
}

bool DataManager::addCustomerViaDb(curCustomer customer)
{
   return this->DB->addCustomer(customer);
    DMPurchases.clear();
    DB->loadPurchases(DMPurchases);
}

void DataManager::AddReview(Testimonial &inReview){
    DB->addTestimonial(inReview);
}
void DataManager::addPotCustomer(potCustomer &inPotCustomer){
    DB->addPotentialCustomer(inPotCustomer);
}
void DataManager::returnReviews(QVector<Testimonial> &inReview)
{
    inReview = DMReviews;
}
