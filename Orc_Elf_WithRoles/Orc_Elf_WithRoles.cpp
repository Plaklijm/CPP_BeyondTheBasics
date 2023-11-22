#include "FarmerRole.h"
#include "ShamanRole.h"
#include "SoldierRole.h"

int main(int argc, char* argv[])
{
    std::vector<NPC*> npcs;
    // add single role NPCs
    npcs.push_back(new FarmerRole(new NPC("elf")));
    npcs.push_back(new FarmerRole(new NPC("orc")));
    npcs.push_back(new SoldierRole(new NPC("elf")));
    npcs.push_back(new SoldierRole(new NPC("orc")));
    npcs.push_back(new ShamanRole(new NPC("elf")));
    npcs.push_back(new ShamanRole(new NPC("orc")));

    // Add non role NPCs
    npcs.push_back(new NPC("elf"));
    npcs.push_back(new NPC("orc"));
    
    // Add multiple roles NPCs
    npcs.push_back(new FarmerRole(new ShamanRole(new NPC("elf"))));  
    npcs.push_back(new SoldierRole(new FarmerRole(new ShamanRole(new NPC("orc")))));
    
    for (auto n : npcs)
    {
        n->render();
        std::cout << "\n";
    }
    
    return 0;
}
