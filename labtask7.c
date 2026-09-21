#include <stdio.h>

int main() {
    char dept;
    int semester;

    printf("=== University Course Lookup System ===\n");
    printf("Departments:\n");
    printf("  'C' - Computer Science\n");
    printf("  'E' - Electrical Engineering\n");
    printf("  'B' - Business Administration\n");
    printf("Select Department (C, E, or B): ");
    scanf(" %c", &dept);

    
    switch (dept) {
        case 'C':
        case 'c':
            printf("Enter Semester (1, 2, or 3): ");
            scanf("%d", &semester);

            
            switch (semester) {
                case 1:
                    printf("Department: Computer Science | Semester 1 Core Course: Introduction to Programming\n");
                    break;
                case 2:
                    printf("Department: Computer Science | Semester 2 Core Course: Data Structures & Algorithms\n");
                    break;
                case 3:
                    printf("Department: Computer Science | Semester 3 Core Course: Database Management Systems\n");
                    break;
                default:
                    printf("Error: Invalid semester '%d'. Please choose 1, 2, or 3.\n", semester);
                    break;
            }
            break;

        case 'E':
        case 'e':
            printf("Enter Semester (1, 2, or 3): ");
            scanf("%d", &semester);

            
            switch (semester) {
                case 1:
                    printf("Department: Electrical Engineering | Semester 1 Core Course: Circuit Analysis I\n");
                    break;
                case 2:
                    printf("Department: Electrical Engineering | Semester 2 Core Course: Digital Logic Design\n");
                    break;
                case 3:
                    printf("Department: Electrical Engineering | Semester 3 Core Course: Signals and Systems\n");
                    break;
                default:
                    printf("Error: Invalid semester '%d'. Please choose 1, 2, or 3.\n", semester);
                    break;
            }
            break;

        case 'B':
        case 'b':
            printf("Enter Semester (1, 2, or 3): ");
            scanf("%d", &semester);

        
            switch (semester) {
                case 1:
                    printf("Department: Business | Semester 1 Core Course: Principles of Management\n");
                    break;
                case 2:
                    printf("Department: Business | Semester 2 Core Course: Financial Accounting\n");
                    break;
                case 3:
                    printf("Department: Business | Semester 3 Core Course: Marketing Strategy\n");
                    break;
                default:
                    printf("Error: Invalid semester '%d'. Please choose 1, 2, or 3.\n", semester);
                    break;
            }
            break;

        default:
            printf("Error: Invalid department '%c'. Please choose 'C', 'E', or 'B'.\n", dept);
            break;
    }

    return 0;
}