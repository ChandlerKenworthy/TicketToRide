#ifndef TICKET_TO_RIDE_CARD_HPP
#define TICKET_TO_RIDE_CARD_HPP
#include "Colors.hpp"

class Card {
    public:
        Card(Color color);
        Color GetColor();
    private:
        Color fColor;
};

#endif