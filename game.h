#ifndef GAME_H
#define GAME_H

#include <glfw3.h>
#include <glm/glm.hpp>
#include "renderer.h"
#include "player.h"
#include "enemy.h"
#include "weapon.h"
#include <vector>

class Game {
private:
    GLFWwindow* window;
    bool isRunning;
    float deltaTime;
    float lastFrameTime;
    
    // Game components
    Renderer renderer;
    Player player;
    std::vector<Enemy> enemies;
    std::vector<Weapon> weapons;
    
    // Game state
    int score;
    int level;
    int enemiesDefeated;
    
public:
    Game();
    ~Game();
    
    bool init(int width, int height, const char* title);
    void run();
    void update(float deltaTime);
    void render();
    void cleanup();
    
    // Game logic methods
    void spawnEnemies();
    void checkCollisions();
    void updateGameState();
    void handleInput();
};

#endif // GAME_H
