#include "Entity.hpp"

Entity::Entity()
{
    x = y = dx = dy = HP = identity = 0;
    texture = nullptr;
}

void
Entity::move()
{
    this->x += dx;
    this->y += dy;
}

void
Entity::setHP(int HP)
{
    this->HP = HP;
}

void
Entity::setIdentity(int identity)
{
    this->identity = identity;
}

void
Entity::setX(int x)
{
    this->x = x;
}

void
Entity::setY(int y)
{
    this->y = y;
}

void
Entity::setDX(int dx)
{
    this->dx = dx;
}

void
Entity::setDY(int dy)
{
    this->dy = dy;
}

void
Entity::updateHP(int HP)
{
    this->HP += HP;
}

void
Entity::setTexture(SDL_Texture* texture)
{
    this->texture = texture;
}

auto
Entity::getX() -> int
{
    return x;
}

auto
Entity::getY() -> int
{
    return y;
}

auto
Entity::getHP() -> int
{
    return HP;
}

auto
Entity::getDX() -> int
{
    return dx;
}

auto
Entity::getDY() -> int
{
    return dy;
}

auto
Entity::getIdentity() -> int
{
    return identity;
}

auto
Entity::getTexture() -> SDL_Texture*
{
    return texture;
}

Entity::~Entity() = default;