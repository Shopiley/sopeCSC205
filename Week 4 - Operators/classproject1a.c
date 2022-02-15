#include <stdio.h>
int main(){
	float csc201, csc205, sta205, total, average, percentage;
	
	do {
	printf("Enter your score over 10 in CSC201: \n");
	scanf("%f", &csc201);
	printf("Enter your score over 10 in CSC205: \n");
	scanf("%f", &csc205);
	printf("Enter your score over 10 in STA205: \n");
	scanf("%f", &sta205);
	
	if ((csc201 > 10) || (csc205 > 10) || (sta205 > 10)) {
	printf("Please input score over 10");
	printf("\n");
	}
	
	else
	continue;
	}
	
	while ((csc201 > 10) || (csc205 > 10) || (sta205 > 10)); 
	printf("\n");
	
	total = csc201 + csc205 + sta205;
	printf("Your total score is: %f \n", total);	
	
	average = total/3;
	printf("Your average score is: %f \n", average);	
	
	percentage = (total/30)*100;
	printf("Your score in percentage is: %f percent \n", percentage);
	
/*	
	loop2:printf("Enter your score over 10 in CSC205: ");
	scanf("%f", &csc205);
	if (csc205 > 10) 
	printf("Please input score over 10");
	goto loop2;
	
	loop3:printf("Enter your score over 10 in STA205: ");
	scanf("%f", &sta205);
	if (sta205 > 10) 
	printf("Please input score over 10");
	goto loop3;
	
	
	total = csc201 + csc205 + sta205;
	printf("Your total score is: %f \n", total);	
	
	average = total/3;
	printf("Your average score is: %f \n", average);	
	
	percentage = (total/30)*100;
	printf("Your score in percentage is: %f percent \n", percentage);
	
	*/	
		
	return 0;
}
