#include <stdio.h>

int main() {
    float a, b, c;
    printf("Enter the three sides of the triangle: ");
    if (scanf("%f %f %f", &a, &b, &c) != 3) {
        printf("Invalid input.\n");
        return 1;
    }

    if (a > 0 && b > 0 && c > 0) {
        
        if ((a + b > c) && (a + c > b) && (b + c > a)) {
            
            
            if (a == b && b == c) {
                printf("Equilateral triangle\n");
            } else {
                if (a == b || b == c || a == c) {
                    printf("Isosceles triangle\n");
                } else {
                    printf("Scalene triangle\n");
                }
            }

        } else {
            printf("Not a valid triangle\n");
        }
    } else {
        printf("Not a valid triangle\n");
    }

    return 0;
}