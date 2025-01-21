const foodPreferences = {
    John: "Pizza",
    Bob: "Burger",
    Alice: "Pasta"
};

function getFavoriteFood(name) {
    return foodPreferences[name] || "Unknown";
}

const name = prompt("Enter the name:");
console.log(`${name}'s favorite food is: ${getFavoriteFood(name)}`);
