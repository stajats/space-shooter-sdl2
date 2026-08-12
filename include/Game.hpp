#pragma once
#include "Effect.hpp"
#include "Enemy.hpp"
#include "Entity.hpp"
#include "Player.hpp"
#include "defs.hpp"
#include <SDL.h>
#include <SDL_image.h>
#include <SDL_mixer.h>
#include <SDL_ttf.h>
#include <algorithm>
#include <cmath>
#include <fstream>
#include <iostream>
#include <sstream>
#include <time.h>
#include <vector>

class Game
{
  private:
    struct
    {
        SDL_Renderer* renderer;
        SDL_Window* window;
        SDL_Texture* background;
        SDL_Texture *titleScreen, *endScreen;
        Mix_Chunk* sounds[soundChannel - 1];
        Mix_Music* music;
        bool running;
    } app;
		SDL_Texture* normalBulletTex = nullptr;
		SDL_Texture* waveBulletTex = nullptr;
		SDL_Texture* enemyTex = nullptr;
		SDL_Texture* bonusHPTex = nullptr;
		SDL_Texture* enhanceAttackTex = nullptr;
    struct
    {
        std::vector<Entity> bullets;
        std::vector<Entity*> fighters;
        std::vector<Entity> powerUp;
        std::vector<Entity> debrises;
        std::vector<std::vector<Effect>> effects;
    } Entities;
    TTF_Font* font = nullptr;
    SDL_Texture* debrisTexture[4];
    std::stringstream healthText, scoreText, hiScoreText;
    std::fstream file;
    Player player;
    Entity playerBullet, enemyBullet, powerUp, debris;
    Enemy* enemy = nullptr;
    Effect explosion;
    int enemySpawnTimer = 0, enemyFire = 0;
    int lastY = 0;
    int gameTicks = 0;
    void prepareScene();
    int backgroundX = 0;
    int score = 0, highScore = 0;
    void initGame();
    void deinitGame();
		void initPlayer();
    void titleScreen();
    void endScreen();
    void updateEntities();
    void enterAnimation();
    void getInput();
    void drawBackground();
    void addExplosion(int /*x*/, int /*y*/);
    void updateHUD();
    void updateScene();
    void draw(SDL_Texture* /*texture*/, int /*x*/, int /*y*/);
    auto loadTexture(const std::string /*path*/&) -> SDL_Texture*;
    static auto detectCollision(int /*x1*/,
                                int /*y1*/,
                                int /*w1*/,
                                int /*h1*/,
                                int /*x2*/,
                                int /*y2*/,
                                int /*w2*/,
                                int /*h2*/) -> bool;

  public:
    void start();
};
