#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <pthread.h>
#include <string.h>


	
void * voterxthread (void * args){
	char rep;
	int level;
	float cgpa;
	printf("Welcome to VoterX\n");
	printf("Are you a current class rep (Y/N)? ");
 	scanf("%s", &rep);
 	printf("What level are you in? ");
 	scanf("%d", &level);
 	printf("What is your CGPA? ");
 	scanf("%f", &cgpa);
 	
 	if ((rep == 'Y')&&(level == 100)&&(cgpa >= 4.0)) {
 		printf("You can vote! \n");
 	}
 	
 	else
 	printf("Sorry, you are not eligible to vote\n");
}


void * pubtaskthread (void * args){
	char name[100];
	int num;
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


int main (){
	int option;
	pthread_t voterx;
	pthread_t pubtask;
	printf("Welcome to Sope's OS \n");
loop:	
	printf("Which of these apps would you like to visit. Press 1 or 2:\n 1)VoterX \n 2)Pubtask \n");
	scanf("%d", &option);
	
if (option == 1){
	pthread_create(&voterx, NULL, voterxthread, NULL); 
	 pthread_exit(NULL);	
}

else if (option == 2){

	pthread_create(&pubtask, NULL, pubtaskthread, NULL); 
	 pthread_exit(NULL);
	
}

else{
printf("Invalid option\n\n");
sleep(1);
goto loop;
}

return 0;
}








