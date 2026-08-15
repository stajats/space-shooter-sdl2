#include "Effect.hpp"

void
Effect::setRGBA(int r, int g, int b, int a)
{
    this->r = r;
    this->g = g;
    this->b = b;
    this->a = a;
}

auto
Effect::getR() -> int
{
    return r;
}

auto
Effect::getG() -> int
{
    return g;
}

auto
Effect::getB() -> int
{
    return b;
}

auto
Effect::getA() -> int
{
    return a;
}

void
Effect::updateA(int a)
{
    this->a += a;
}