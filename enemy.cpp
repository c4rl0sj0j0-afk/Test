#include <string>

class Enemy {
private:
    std::string name;
    int health;
    int damage;

public:
    // Constructor
    Enemy(std::string name, int health, int damage) : name(name), health(health), damage(damage) {}

    // Method to handle damage
    void takeDamage(int amount) {
        if (amount < 0) return; // Prevent negative damage
        health -= amount;
        if (health < 0) health = 0; // Prevent health from going below 0
    }

    // Method to check if alive
    bool isAlive() const {
        return health > 0;
    }

    // Method to get enemy name
    std::string getName() const {
        return name;
    }
};
