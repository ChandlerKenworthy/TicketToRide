#ifndef TICKET_TO_RIDE_TILE_HPP
#define TICKET_TO_RIDE_TILE_HPP
#include "Utils.hpp"

class Tile {
    public:
        Tile(Type type, Position& pos);
        Position GetPosition();
        Type GetType();
        void PrintPosition();
    private:
        Type fType;
        Position fPos;
};

#endif