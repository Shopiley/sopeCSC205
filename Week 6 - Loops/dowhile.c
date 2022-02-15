/*
#include <stdio.h>

int main() { 

	double number, sum = 0;
	
	do{
	printf("Enter a number");
	scanf("%lf", &number);
	sum += number;
	}
	
	while (number != 0.0);
	
	printf("Sum = %.2lf\n", sum);
	
	return 0;

}
*/

/*
#include <stdio.h>

int main() { 
	int i;
	double number, sum = 0.0;
	
	for(i=1; 1<=10; ++i) {
	printf("Enter n%d: ",i);
	scanf("%lf", &number);
	
	if (number < 0.0) {
	break;
	}
	
	sum+= number;
	}
	
	printf("Sum = %.2lf", sum);
	
	return 0;
}
*/

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <pthread.h>

//global variable that can be changed in threads
int grade = 80;
int age = 17;

//thread funtion
void * myThreadAdd(void*vargp){
	int *myid = (int *)vargp;
	//static int age = 17;
	//static int grade = 80;
	++age; ++grade;
	printf("Thread ID: %d, Age:%d, Grade:%d\n", *myid, ++age, ++grade);
}

int main(){
	int i;
	pthread_t tid;
	
	//creating three threads
	for (i=0; i<5; i++)
		pthread_create(&tid, NULL, myThreadAdd, (void *)&tid);
		pthread_join(tid, NULL);
	pthread_exit(NULL);
	return 0;
}































