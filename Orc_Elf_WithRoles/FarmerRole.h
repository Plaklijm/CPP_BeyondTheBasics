#pragma once
#include "Decorator.h"

class FarmerRole : public Decorator
{
public:
    FarmerRole(NPC* npc);
    void render() override;
};
