#include "SoldierRole.h"

SoldierRole::SoldierRole(NPC* npc) : Decorator(npc)
{
}

void SoldierRole::render()
{
    Decorator::render();
    std::cout << " | Soldier";
}
