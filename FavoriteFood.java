import java.util.HashMap;
import java.util.Map;
import java.util.Scanner;

public class FavoriteFood {
    private Map<String, String> foodPreferences;

    public FavoriteFood() {
        foodPreferences = new HashMap<>();
        foodPreferences.put("John", "Pizza");
        foodPreferences.put("Bob", "Burger");
        foodPreferences.put("Alice", "Pasta");
    }

    public String getFavoriteFood(String name) {
        return foodPreferences.getOrDefault(name, "Unknown");
    }

    public static void main(String[] args) {
        FavoriteFood favoriteFood = new FavoriteFood();
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter the name: ");
        String name = scanner.nextLine();

        System.out.println(name + "'s favorite food is: " + favoriteFood.getFavoriteFood(name));
    }
}
