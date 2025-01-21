#include "favorite_food.h"

FavoriteFood::FavoriteFood() {
    // Initialize the favorite foods
    foodPreferences = {
        {"John", "Pizza"},
        {"Bob", "Burger"},
        {"Alice", "Pasta"}
    };
}

std::string FavoriteFood::getFavoriteFood(const std::string& name) const {
    auto it = foodPreferences.find(name);
    if (it != foodPreferences.end()) {
        return it->second;
    }
    return "Unknown";
}
