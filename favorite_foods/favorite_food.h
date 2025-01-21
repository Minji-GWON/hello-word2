#ifndef FAVORITE_FOOD_H
#define FAVORITE_FOOD_H

#include <string>
#include <unordered_map>

class FavoriteFood {
public:
    FavoriteFood();
    std::string getFavoriteFood(const std::string& name) const;

private:
    std::unordered_map<std::string, std::string> foodPreferences;
};

#endif // FAVORITE_FOOD_H
