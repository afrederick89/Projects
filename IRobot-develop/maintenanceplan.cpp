#include "maintenanceplan.h"

MaintenancePlan::MaintenancePlan()
{
    createPlans();
}

void MaintenancePlan::createPlans()
{
    plans.resize(3);

    plans.at(0).name = "Bronze";
    plans.at(0).price = 1000;

    plans.at(1).name = "Silver";
    plans.at(1).price = 3000;

    plans.at(2).name = "Gold";
    plans.at(2).price = 5000;

}

vector<MaintenancePlanDefinition> MaintenancePlan::getPlans() const
{
    return plans;
}

MaintenancePlanDefinition MaintenancePlan::getPlan(int i)
{
   return plans.at(i);
}
