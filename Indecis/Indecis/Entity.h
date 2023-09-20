#pragma once
#include <iostream>
#include <vector>

class Entity
{
public:
    float x;
    float y;

    Entity(float _x, float _y);

    virtual void Update(std::vector<Entity*>& _entityList);

    virtual void Draw();
};
