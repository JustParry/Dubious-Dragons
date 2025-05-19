// Dependancies
#include <iostream>
#include <string>
#include <vector>
#include <tuple>
#include "power.h"

//Variables
// Name, Kingdom, (Power name, cost, damage)
std::vector<std::tuple<std::string, std::string, std::vector<std::tuple<std::string, int, float>>>> dragons = {
    {"Ouroboros", "Inanimus", {}},
    {"Yam", "Ignis", {}},
    {"Mahoraga", "Subsisto", {}}
};
// Class

Dragon::Dragon(std::string name, std::string kingdom, std::vector<std::tuple<std::string, int, float>> powers)
    : name(name), kingdom(kingdom), powers(powers) {}


// Method to display dragon's information
void Dragon::display() {
    std::cout << "Dragon Name: " << name << "\n";
    std::cout << "Kingdom: " << kingdom << "\n";
    std::cout << "Powers:\n";
    for (const auto& power : powers) {
        std::cout << "  - Power Name: " << std::get<0>(power) 
                  << ", Cost: " << std::get<1>(power) 
                  << ", Damage: " << std::get<2>(power) << "\n";
    }
}