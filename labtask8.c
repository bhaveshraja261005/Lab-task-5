#include <stdio.h>

int main() {
    int category, item;

    printf("=== Restaurant Menu ===\n");
    printf("1. Beverages\n");
    printf("2. Main Course\n");
    printf("3. Desserts\n");
    printf("Select a category (1-3): ");

    if (scanf("%d", &category) != 1) {
        printf("Invalid input. Please enter a number.\n");
        return 1;
    }

    
    switch (category) {
        case 1:
            printf("\n--- Beverages Menu ---\n");
            printf("1. Espresso - $3.50\n");
            printf("2. Iced Tea  - $2.50\n");
            printf("3. Fresh Juice - $4.00\n");
            printf("Select an item (1-3): ");
            scanf("%d", &item);

            
            switch (item) {
                case 1:
                    printf("Item Selected: Espresso | Price: $3.50\n");
                    break;
                case 2:
                    printf("Item Selected: Iced Tea | Price: $2.50\n");
                    break;
                case 3:
                    printf("Item Selected: Fresh Juice | Price: $4.00\n");
                    break;
                default:
                    printf("Error: Invalid beverage selection '%d'. Please select between 1 and 3.\n", item);
                    break;
            }
            break;

        case 2:
            printf("\n--- Main Course Menu ---\n");
            printf("1. Grilled Chicken - $12.99\n");
            printf("2. Pasta Carbonara - $11.50\n");
            printf("3. Veggie Burger   - $9.99\n");
            printf("Select an item (1-3): ");
            scanf("%d", &item);

            
            switch (item) {
                case 1:
                    printf("Item Selected: Grilled Chicken | Price: $12.99\n");
                    break;
                case 2:
                    printf("Item Selected: Pasta Carbonara | Price: $11.50\n");
                    break;
                case 3:
                    printf("Item Selected: Veggie Burger | Price: $9.99\n");
                    break;
                default:
                    printf("Error: Invalid main course selection '%d'. Please select between 1 and 3.\n", item);
                    break;
            }
            break;

        case 3:
            printf("\n--- Desserts Menu ---\n");
            printf("1. Chocolate Cake - $5.50\n");
            printf("2. Cheesecake     - $6.00\n");
            printf("3. Tiramisu        - $6.50\n");
            printf("Select an item (1-3): ");
            scanf("%d", &item);

        
            switch (item) {
                case 1:
                    printf("Item Selected: Chocolate Cake | Price: $5.50\n");
                    break;
                case 2:
                    printf("Item Selected: Cheesecake | Price: $6.00\n");
                    break;
                case 3:
                    printf("Item Selected: Tiramisu | Price: $6.50\n");
                    break;
                default:
                    printf("Error: Invalid dessert selection '%d'. Please select between 1 and 3.\n", item);
                    break;
            }
            break;

        default:
            printf("Error: Invalid category selection '%d'. Please select 1, 2, or 3.\n", category);
            break;
    }

    return 0;
}