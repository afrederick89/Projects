#ifndef MAINTENANCEPLAN_H
#define MAINTENANCEPLAN_H
#include <iostream>
#include <vector>
using namespace std;

struct MaintenancePlanDefinition{
    double price;
    string name;
};

class MaintenancePlan
{
public:
    MaintenancePlan();
    void createPlans();
    vector<MaintenancePlanDefinition> getPlans() const;

    // Used when a customer wants to buy plan i
    MaintenancePlanDefinition getPlan(int i);

private:
    vector<MaintenancePlanDefinition> plans;
};

#endif // MAINTENANCEPLAN_H
