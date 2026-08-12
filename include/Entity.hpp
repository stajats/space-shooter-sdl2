#pragma once
#include <SDL.h>

class Entity
{
  protected:
    int x, y, dx, dy;
    int HP;
    int identity;
    SDL_Texture* texture;

  public:
    Entity();
    void move();
    void setHP(int /*HP*/);
    void setX(int /*x*/);
    void setY(int /*y*/);
    void setDX(int /*dx*/);
    void setDY(int /*dy*/);
    void updateHP(int /*HP*/);
    void setIdentity(int identity);
    void setTexture(SDL_Texture* /*texture*/);
    auto getX() -> int;
    auto getY() -> int;
    auto getDX() -> int;
    auto getDY() -> int;
    auto getHP() -> int;
    auto getIdentity() -> int;
    auto getTexture() -> SDL_Texture*;
    virtual ~Entity();
};