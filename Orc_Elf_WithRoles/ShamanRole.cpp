#include "ShamanRole.h"

ShamanRole::ShamanRole(NPC* npc) : Decorator(npc)
{
}

void ShamanRole::render()
{
    Decorator::render();
    std::cout << " | Shaman";
}