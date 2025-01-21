food_preferences = {
    "John": "Pizza",
    "Bob": "Burger",
    "Alice": "Pasta"
}

def get_favorite_food(name):
    """Returns the favorite food of the given name or 'Unknown' if not found."""
    return food_preferences.get(name, "Unknown")

def main():
    name = input("Enter the name: ").strip()
    favorite = get_favorite_food(name)
    print(f"{name}'s favorite food is: {favorite}")

if __name__ == "__main__":
    main()
