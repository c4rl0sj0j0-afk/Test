#include <iostream>
#include <chrono>
#include <thread>

bool isRunning = true;

void handleInput() {
    char input;
    std::cout << "Enter 'q' to quit: ";
    std::cin >> input;
    if (input == 'q') {
        isRunning = false;
    }
}

void gameLoop() {
    while (isRunning) {
        std::cout << "Game is running..." << std::endl;

        // Handle user input in this frame
        handleInput();

        // Simulate game processing delay
        std::this_thread::sleep_for(std::chrono::milliseconds(500));
    }
    std::cout << "Game has ended." << std::endl;
}

int main() {
    gameLoop();
    return 0;
}