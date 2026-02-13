#include <iostream>

class Player {
public:
    Player() : health(100), position{0, 0, 0} {}

    void move(float x, float y, float z) {
        position[0] += x;
        position[1] += y;
        position[2] += z;
        std::cout << "Moved to position: " << position[0] << ", " << position[1] << ", " << position[2] << std::endl;
    }

    void attack() {
        std::cout << "Attacking!" << std::endl;
    }

    void takeDamage(int damage) {
        health -= damage;
        if (health < 0) health = 0;
        std::cout << "Health: " << health << std::endl;
    }

    void rotateCamera(float angle) {
        // Rotate camera logic here
        std::cout << "Camera rotated by " << angle << " degrees." << std::endl;
    }

private:
    int health;
    float position[3]; // x, y, z
};