#ifndef UTILS_HPP
#define UTILS_HPP

enum Type {
    standard,
    tunnel,
    discard,
    none  
};

struct Position {
    int x;
    int y;
};

#endif