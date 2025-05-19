#ifndef POWER_H
#define POWER_H

// Dependencies
#include <iostream>
#include <string>
#include <vector>
#include <tuple>

// Class
class Dragon {
public:
    // Constructor
    Dragon(std::string name, std::string kingdom, std::vector<std::tuple<std::string, int, float>> powers)
        : name(name), kingdom(kingdom), powers(powers) {}

    // Destructor
    ~Dragon() {}

    // Method to display dragon's information
    void display() {}

    // Method to add a new power
    void addPower(std::string newPower) {}

    // Method to level up a power
    void levelUpPower(std::string powerName) {}


private:
    std::string name; // Name of the dragon
    std::string kingdom; // Kingdom of the dragon
    std::vector<std::tuple<std::string, int, float>> powers; // Power details (name, cost, damage)
};
#endif