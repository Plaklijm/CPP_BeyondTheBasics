#pragma once
#include "Decorator.h"

class SoldierRole : public Decorator
{
public:
    SoldierRole(NPC* npc);
    void render() override;
};
