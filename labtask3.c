#include<stdio.h>
int main(){
int num1,num2,num3,num4;
printf("Enter First number:\n");
scanf("%d", &num1);
printf("Enter Second number:\n");
scanf("%d", &num2);
printf("Enter Third number:\n");
scanf("%d", &num3);
printf("Enter Fourth number:\n");
scanf("%d", &num4);

if(num1>num2){
    if(num1>num3){
        if(num1>num4){
            printf("The largest number is: %d", num1);
        }
        else{
            printf("The largest number is: %d", num4);
        }
    }
    else{
        if(num3>num4){
            printf("The largest number is: %d", num3);
        }
        else{
            printf("The largest number is: %d", num4);
        }
    }
}
    return 0;
}