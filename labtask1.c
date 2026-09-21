#include<stdio.h>
int main(){
	int marks;
	printf("Enter your marks:\n");
	scanf("%d", &marks);
	if(marks>=90){
		if(marks==100){
			printf("Perfect score\n");
		}
		else printf("A Grade");
	}
	else if(marks>=75)
	printf("B Grade\n");
	else if(marks>=60)
	printf("C Grade\n");
	else if(marks>=40)
	printf("D grade\n");
	else
	printf("Fail\n");
	return 0;
}