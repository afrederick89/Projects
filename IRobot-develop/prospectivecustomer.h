#ifndef PROSPECTIVECUSTOMER_H
#define PROSPECTIVECUSTOMER_H

#include "basecustomer.h"

class ProspectiveCustomer : public BaseCustomer
{
public:
    ProspectiveCustomer();

    bool isPamphletRequested() const;
    void setPamphletRequest(bool value);

private:
    // true if requested, false otherwise
    bool pamphletRequest;
};

#endif // PROSPECTIVECUSTOMER_H
