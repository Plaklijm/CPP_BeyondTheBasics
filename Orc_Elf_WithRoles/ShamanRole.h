#pragma once
#include "Decorator.h"

class ShamanRole : public Decorator
{
public:
    ShamanRole(NPC* npc);
    void render() override;
};
