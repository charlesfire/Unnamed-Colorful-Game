#ifndef AABB_HPP
#define AABB_HPP

#include <SFML/System/Vector2.hpp>
#include <SFML/Config.hpp>

enum CollisionFlag : sf::Uint8{solid1, solid2, damage1, damage2};

enum CollisionOrientation{Top, Bottom, Right, Left};

class AABB
{
    public:
        AABB();
        AABB(const AABB& other);
        AABB(sf::Vector2f position, sf::Vector2f dimension);
        AABB(float x, float y, float width, float height);
        virtual ~AABB();
        bool isColliding(const AABB& boundingBox)const;
        CollisionOrientation getCollisionOrientation(const AABB& other)const;

        sf::Vector2f m_position, m_dimension;
        CollisionFlag m_flag;
};

#endif // AABB_HPP
