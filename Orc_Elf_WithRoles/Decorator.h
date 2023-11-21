#pragma once
#include "NPC.h"

class Decorator : public NPC
{
public:
    Decorator(NPC* npc);
    virtual ~Decorator();
    void render() override;
protected:
    NPC* npc;
};
