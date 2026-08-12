#pragma once
#include "Entity.hpp"

class Enemy : public Entity
{
  private:
    int reload;
    int ticks;
    bool changeMovement;

  public:
    Enemy();
    void setReload(int /*reload*/);
    void setChangeMovement(bool /*changed*/);
    void updateTicks();
    auto getReload() -> int;
    auto getChangeMovement() -> bool;
    auto getTIcks() -> int;
};