#ifndef TICKET_TO_RIDE_TICKET_HPP
#define TICKET_TO_RIDE_TICKET_HPP
#include "Destinations.hpp"

class Ticket {
    public:
        Ticket();

    private:
        int fRouteLength;
        Destination fStartDestination;
        Destination fEndDestination;
};

#endif