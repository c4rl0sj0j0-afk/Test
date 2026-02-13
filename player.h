#ifndef PLAYER_H
#define PLAYER_H

#include <glm/glm.hpp>
#include <vector>

class Player {
private:
    glm::vec3 position;
    glm::vec3 direction;
    glm::vec3 velocity;
    
    // Player stats
    float health;
    float maxHealth;
    float moveSpeed;
    float rotationSpeed;
    float jumpPower;
    bool isJumping;
    
    // Inventory
    std::vector<int> weaponInventory;
    int currentWeapon;
    int ammo;
    int maxAmmo;
    
    // Camera
    float pitch;
    float yaw;
    
public:
    Player();
    ~Player();
    
    // Movement
    void moveForward(float speed);
    void moveBackward(float speed);
    void moveLeft(float speed);
    void moveRight(float speed);
    void jump();
    void applyGravity(float deltaTime);
    
    // Combat
    void takeDamage(float damage);
    void heal(float amount);
    void shoot();
    void reloadWeapon();
    void switchWeapon(int weaponIndex);
    
    // Camera/View
    void updateCamera(float deltaX, float deltaY);
    void setPitch(float p);
    void setYaw(float y);
    
    // Getters
    glm::vec3 getPosition() const { return position; }
    glm::vec3 getDirection() const { return direction; }
    float getHealth() const { return health; }
    float getAmmo() const { return ammo; }
    int getCurrentWeapon() const { return currentWeapon; }
    float getPitch() const { return pitch; }
    float getYaw() const { return yaw; }
    
    // Setters
    void setPosition(glm::vec3 pos) { position = pos; }
    void setHealth(float h) { health = glm::min(h, maxHealth); }
    
    // Update
    void update(float deltaTime);
};

#endif // PLAYER_H