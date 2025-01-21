using System;
using System.Collections.Generic;

class FavoriteFood {
    private Dictionary<string, string> foodPreferences;

    public FavoriteFood() {
        foodPreferences = new Dictionary<string, string> {
            { "John", "Pizza" },
            { "Bob", "Burger" },
            { "Alice", "Pasta" }
        };
    }

    public string GetFavoriteFood(string name) {
        return foodPreferences.TryGetValue(name, out string food) ? food : "Unknown";
    }
}

class Program {
    static void Main(string[] args) {
        FavoriteFood favoriteFood = new FavoriteFood();

        Console.Write("Enter the name: ");
        string name = Console.ReadLine();

        Console.WriteLine($"{name}'s favorite food is: {favoriteFood.GetFavoriteFood(name)}");
    }
}
