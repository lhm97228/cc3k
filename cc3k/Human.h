// by a58zhang, h65lu, y842liu for CS246 1175 Final Project
// This file is contributed by Hanming Lu (h65lu)
#ifndef Human_h
#define Human_h
#include "Enemy.h"
#include "Type.h"

class Human final : public Enemy {
public:
    Type getType() const override; // returns the most detailed Type
    int dropGold() override; // does not give gold directly, calls HumanHoard ctor

    Human(int x, int y); // calls Enemy's ctor
};
#endif
