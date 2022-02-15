#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <string.h>

int main (){
	int option;
	char rep;
	int level;
	float cgpa;
	char name[100];
	int num;
	printf("Welcome to Sope's OS \n");
	printf("Which of these apps would you like to visit. Press 1 or 2:\n 1)VoterX \n 2)Pubtask \n");
	scanf("%d", &option);
if (option==1){
	printf("Welcome to VoterX\n");
	printf("Are you a current class rep (y/n)? ");
 	scanf("%s", &rep);
 	printf("What level are you in? ");
 	scanf("%d", &level);
 	printf("What is your CGPA? \n");
 	scanf("%f", &cgpa);
 		
 	if ((rep == 'y')&&(level == 100)&&(cgpa >= 4.0)) {
 		printf("You can vote! \n");
 	}	
 	else
 	printf("Sorry, you are not eligible to vote");
 	}
		
else if (option==2){
	printf("Welcome to Pubtask\n");
	printf("Input your name: ");
	scanf("%s",name);
	
	printf("Number of papers published: ");
	scanf("%d", &num);
	
	if ((num>=3) && (num<=5)){
		printf("Hello %s, your incentive is N500,000 \n", name);
	}
	
	else if ((num>5) && (num<10)){
		printf("Hello %s, your incentive is N800,000 \n", name);
	}
	
	else if (num>=10){
		printf("Hello %s, your incentive is N1,000,000 \n", name);
	}
	
	else if (num<3){
		printf("Hello %s, your incentive is N100,000 \n", name);
	}
	
	}
else{
printf("Wrong Option");
}

return 0;		
}
