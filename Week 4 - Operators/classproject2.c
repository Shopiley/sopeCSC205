#include <stdio.h>
int main(){
	int age, exp;
	printf("Enter your level of experience in years: ");
	scanf("%d", &exp);
	printf("Enter your age: ");
	scanf("%d", &age);
	
	if (exp >= 3) {
	if  (age >= 40){
	printf("Your salary is N560,000 \n");	
}
	else if (30 <= age <= 40){
	printf("Your salary is N480,000 \n");	
}
	else if (age <= 28){
	printf("Your salary is N300,000 \n");	
}
}
	else{
	printf("Your salary is N100,000. \n");
	}
	
	return 0;
}
