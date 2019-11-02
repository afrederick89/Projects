#include "prospectivecustomer.h"

ProspectiveCustomer::ProspectiveCustomer()
{

}

bool ProspectiveCustomer::isPamphletRequested() const
{
    return pamphletRequest;
}

void ProspectiveCustomer::setPamphletRequest(bool value)
{
    pamphletRequest = value;
}
