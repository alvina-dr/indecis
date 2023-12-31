#include "Transform.h"

Transform::Transform( float _x, float _y, std::string _spriteName )
{
    position.x = _x;
    position.y = _y;
    spriteName = _spriteName;
    animFrame = 0;
}

void Transform::Update( std::vector<Transform*>& _entityList, Grid& grid )
{

}

void Transform::ExplosionReaction( std::vector<Transform*>& _entityList ) {
    std::cout << "EXPLOSION DETECTED IN TRANSFORM" << std::endl;
}
