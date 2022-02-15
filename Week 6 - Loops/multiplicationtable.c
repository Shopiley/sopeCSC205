#include<stdio.h>

int main(){

	int num, a, b;
	
	printf("Enter the value of n: ");
	scanf("%d", &num);
	
	printf("Multiplication Table from 1 to %d \n", num);
	
	for (a=1; a<=12; a++){
		for (b=1; b<=num; b++){
		printf("%d\t",b*a);
		}
		printf("\n");
		}
		
	
	/*for (a=1; a<=12; a++){
		for (b=1; b<=a; b++){
		printf("%d", a+b);
		}
		printf("\n");
		}
		*/
	
	return 0;

}
