#include "Enemy.hpp"

Enemy::Enemy()
{
    reload = static_cast<int>(changeMovement = ((ticks = 0)) != 0);
}

void
Enemy::setReload(int reload)
{
    this->reload = reload;
}

void
Enemy::setChangeMovement(bool changed)
{
    this->changeMovement = changed;
}

void
Enemy::updateTicks()
{
    this->ticks++;
}

auto
Enemy::getReload() -> int
{
    return reload;
}

auto
Enemy::getChangeMovement() -> bool
{
    return changeMovement;
}

auto
Enemy::getTIcks() -> int
{
    return ticks;
}