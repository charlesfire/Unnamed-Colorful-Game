#ifndef DYNAMICAABB_Hpp
#define DYNAMICAABB_Hpp

#include "AABB.hpp"

class DynamicAABB : public AABB
{
    public:
        DynamicAABB();
        DynamicAABB(const DynamicAABB& other);
        DynamicAABB(sf::Vector2f position, sf::Vector2f dimension, sf::Vector2f velocity, sf::Vector2f acceleration, CollisionFlags flags=CollisionFlags::noCollision);
        DynamicAABB(float x, float y, float width, float height, float xVelocity=0.f, float yVelocity=0.f, float xAcceleration=0.f, float yAcceleration=0.f, CollisionFlags flags=CollisionFlags::noCollision);
        virtual ~DynamicAABB();
        void moveOut(AABB& other);

        sf::Vector2f m_velocity, m_acceleration;
};

#endif // DYNAMICAABB_Hpp
