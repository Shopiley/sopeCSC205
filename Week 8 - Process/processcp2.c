#include<stdio.h>
#include<stdlib.h>
#include<pthread.h>
#include<unistd.h>

char name[100];

void *popthread(void *args){
	printf("Hello %s! this is pop\n", name);
	return NULL;
}

void *rnbthread(void *args){
	printf("Hello %s! this is rnb\n", name);
	return NULL;
}

void *folkthread(void *args){
	printf("Hello %s! this is folk music\n", name);
	return NULL;
}

void *classicthread(void *args){
	printf("Hello %s! this is classical music\n", name);
	return NULL;
}

int main(){
	int genre;
	pthread_t pop;
	pthread_t rnb;
	pthread_t folk;
	pthread_t classic;
	
	printf("artist name: ");
	scanf("%[^\n]",name);
	
	printf("1)pop \n2)RnB \n3)Folk \n4)Classic \nWhich genre are you interested in? ");
	scanf("%d",&genre);
	
	if (fork() == 0){
	
	switch (genre){
	case 1:
	pthread_create(&pop, NULL, popthread, (void *)&pop);
	sleep(1);
	break;
	
	case 2:
	pthread_create(&rnb, NULL, rnbthread, (void *)&rnb);
	sleep(1);
	break;
	
	case 3:
	pthread_create(&folk, NULL, folkthread, (void *)&folk);
	sleep(1);
	break;
	
	case 4:
	pthread_create(&classic, NULL, classicthread, (void *)&classic);
	sleep(1);
	break;

	}
	}	
}
