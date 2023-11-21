#include "FarmerRole.h"

FarmerRole::FarmerRole(NPC* npc) : Decorator(npc)
{
}

void FarmerRole::render()
{
    Decorator::render();
    std::cout << " | Farmer";
}
