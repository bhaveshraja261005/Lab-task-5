#include <stdio.h>

int main() {
    char light, ped_button;

    printf("Enter traffic light color ('R' for Red, 'Y' for Yellow, 'G' for Green): ");
    scanf(" %c", &light);

    
    switch (light) {
        case 'R':
        case 'r':
            printf("Is pedestrian button pressed? ('Y' for Yes, 'N' for No): ");
            scanf(" %c", &ped_button);

            
            switch (ped_button) {
                case 'Y':
                case 'y':
                    printf("Action: Stop vehicle. Pedestrian crossing active — pedestrians may cross.\n");
                    break;
                case 'N':
                case 'n':
                    printf("Action: Stop vehicle and wait for green signal.\n");
                    break;
                default:
                    printf("Error: Invalid pedestrian button input '%c'.\n", ped_button);
                    break;
            }
            break;

        case 'Y':
        case 'y':
            
            printf("Action: Prepare to stop. Proceed with caution only if unable to stop safely.\n");
            break;

        case 'G':
        case 'g':
            printf("Is pedestrian button pressed? ('Y' for Yes, 'N' for No): ");
            scanf(" %c", &ped_button);

            
            switch (ped_button) {
                case 'Y':
                case 'y':
                    printf("Action: Go, but watch for pedestrians waiting to cross.\n");
                    break;
                case 'N':
                case 'n':
                    printf("Action: Go — road is clear.\n");
                    break;
                default:
                    printf("Error: Invalid pedestrian button input '%c'.\n", ped_button);
                    break;
            }
            break;

        default:
            printf("Error: Invalid traffic light color '%c'. Please enter R, Y, or G.\n", light);
            break;
    }

    return 0;
}