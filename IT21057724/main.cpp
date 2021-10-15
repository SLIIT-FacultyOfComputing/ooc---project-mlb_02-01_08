#include <iostream>
#include <cstring>
#include "Customer.h"
#include "TravelAgent.h"
#include "Flight.h"
#include "Payment.h"
#include "RegisteredCustomer.h"
#include "Ticket.h"
#include "UnregisteredCustomer.h"
using namespace std;
int main()
{
    Flight *fli = new Flight();
    Payment *pay = new Payment();
    RegisteredCustomer *regcustomer = new RegisteredCustomer();
    UnregisteredCustomer *unrcustomer = new UnregisteredCustomer();
    TravelAgent *travag = new TravelAgent();
    Ticket *tick = new Ticket();

    delete fli;
    delete pay;
    delete regcustomer;
    delete unrcustomer;
    delete travag;
    delete tick;

    return 0;
}
