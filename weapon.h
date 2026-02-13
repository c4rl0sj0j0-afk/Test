#ifndef WEAPON_H
#define WEAPON_H

class Weapon {
public:
    virtual void fire() = 0;
};

class Blaster : public Weapon {
public:
    void fire() override {
        // Implementation for firing a blaster
    }
};

class Lightsaber : public Weapon {
public:
    void fire() override {
        // Implementation for activating a lightsaber
    }
};

class Rifle : public Weapon {
public:
    void fire() override {
        // Implementation for firing a rifle
    }
};

#endif // WEAPON_H
