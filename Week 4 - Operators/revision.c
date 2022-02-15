
//#include <stdio.h>

/*
int main (){
	char chr;
	printf("Please a character:");
	scanf("%c", &chr);
	
	printf("You entered %c \n", chr);
	
	//prints ASCII value of character
	printf("You entered %d", chr);
	
return 0;	
}



#include <stdio.h>
int main (){
	int a;
	char b;
	
	printf("Enter integer then a character \n");
	scanf("%d%c", &a, &b);
	
	printf("You entered %d and %c \n", a, b);
	return 0;
}


#include <stdio.h>
int main (){
	int a, b, output;
	
	printf("Enter integer\n");
	scanf("%d", &a);
	printf("Enter integer");
	scanf("%d", &b);
	
	output= a + b;
	printf("sum of two values is %d \n", output);
	output = a - b;
	printf("difference of two values is %d \n", output);
	
	printf("increment of first value is %d \n", ++a);
	printf("decrement of second value is %d \n", --b);
	return 0;
}

#include <stdio.h>
int main() 
{
	int num,i;
	printf("Enter any number");
	scanf("%d", &num);
	
	for (i=0; i<=10; ++i)
	printf("%d shifted twice to the right : %d\n", num, num>>i);
	
	printf("\n");
	
	for (i=0; i<=10; ++i)
	printf("%d shifted twice to the left : %d\n", num, num<<i);
	return 0;
}


int main() {
double number, sum = 0;
 
 do {
 	printf("Enter a number");
 	scanf("%lf", &number);
 	sum += number;
 }

while (number != 0.0);

printf("Sum = %.2lf\n" , sum); //2 d.p

return 0;
}

*/


#include <stdio.h>

int main () {
	int i;
	double number, sum = 0.0;
	
	for (i=1; i<=10; ++i) {
	printf("Enter n %d: ", i);
	scanf("%lf", &number);
	
	if (number < 0.0){
	break; //break terminates this if loop and goes to sum. If continue was used, after a negative number is entered, it would still continue the enter n... until i=10. Continue goes back to for loop
	}
	
	sum += number;
	}
	
	printf("Sum = %.2lf", sum);
	
	return 0;
}



















































