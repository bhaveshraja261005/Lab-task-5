#include <stdio.h>

int main() {
    float units;
    char connection_type;
    float total_bill = 0.0;

    float dom_rate_tier1 = 0.15; 
    float dom_rate_tier2 = 0.25; 
    float dom_rate_tier3 = 0.40;
    
    float comm_rate_tier1 = 0.30;
    float comm_rate_tier2 = 0.45; 
    float comm_rate_tier3 = 0.65;

    printf("Enter number of units consumed: ");
    if (scanf("%f", &units) != 1 || units < 0) {
        printf("Invalid input for units.\n");
        return 1;
    }

    printf("Enter connection type ('D' for Domestic, 'C' for Commercial): ");
    scanf(" %c", &connection_type);

    if (connection_type == 'D' || connection_type == 'd') {
        if (units <= 100) {
            total_bill = units * dom_rate_tier1;
        } else if (units <= 300) {
            total_bill = units * dom_rate_tier2;
        } else {
            total_bill = units * dom_rate_tier3;
        }
    } else if (connection_type == 'C' || connection_type == 'c') {
        if (units <= 100) {
            total_bill = units * comm_rate_tier1;
        } else if (units <= 300) {
            total_bill = units * comm_rate_tier2;
        } else {
            total_bill = units * comm_rate_tier3;
        }
    } else {
        printf("Invalid connection type.\n");
        return 1;
    }

    printf("Total Electricity Bill: $%.2f\n", total_bill);

    return 0;
}