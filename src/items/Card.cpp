#include "Card.hpp"
#include "Colors.hpp"

Card::Card(Color color)
:fColor{color}
{

}

Color Card::GetColor() {
    return fColor;
}