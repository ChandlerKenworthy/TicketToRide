#include "Tile.hpp"
#include "Utils.hpp"
#include <iostream>

Tile::Tile(Type type, Position& pos) 
:fType{type}, fPos{pos}
{

}

Position Tile::GetPosition() {
    return fPos;
}

Type Tile::GetType() {
    return fType;
}

void Tile::PrintPosition() {
    std::cout << "(" << fPos.x << ", " << fPos.y << ")\n"; 
}

