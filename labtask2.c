#include <stdio.h>

int main() {
    int age;
    char day;
    float price;
    float discounted_weekday = 950.00;
    float discounted_weekend = 1000.00;
    float regular_weekday = 1200.00;
    float regular_weekend = 1500.00;

    
    printf("Enter customer age: ");
    scanf("%d", &age);

    printf("Enter day ('W' for Weekday, 'H' for Weekend/Holiday): ");
    scanf(" %c", &day);
    if (age < 12 || age > 60) {
        
        if (day == 'W' || day == 'w') {
            price = discounted_weekday;
        } else if (day == 'H' || day == 'h') {
            price = discounted_weekend;
        } else {
            printf("Invalid day input.\n");
            return 1;
        }
    } else {
        if (day == 'W' || day == 'w') {
            price = regular_weekday;
        } else if (day == 'H' || day == 'h') {
            price = regular_weekend;
        } else {
            printf("Invalid day input.\n");
            return 1;
        }
    }

    printf("Final Ticket Price: $%.2f\n", price);

    return 0;
}