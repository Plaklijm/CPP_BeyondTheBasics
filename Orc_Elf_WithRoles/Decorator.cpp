#include "Decorator.h"

Decorator::Decorator(NPC* npc) : NPC()
{
    this->npc = npc;
}

Decorator::~Decorator()
{
    if(!npc)
        return;
    delete npc;
}

void Decorator::render()
{
    this->npc->render();
}
