#pragma once
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

class NPC
{
protected:
    std::string name;
public:
    NPC() = default;
    NPC(const std::string& name) { this->name = name; }
    
    virtual ~NPC() = default;

    virtual void render()
    {
        std::cout << name;
    }
};
