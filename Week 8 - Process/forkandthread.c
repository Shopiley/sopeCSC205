#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <pthread.h>

void *childThread(void*args)
{
	printf("The child process created this thread\n");
	return NULL;
}

int main()
{
	int gap;
	
	pthread_t pid;
	printf("Before Process Created\n");
	gap = fork();
	printf("After Process Created\n");
	//pthread_create(&pid, NULL, &childThread, NULL);
	
	if (gap == 0){
		printf("Child process before thread creation\n");
		pthread_create(&pid, NULL, &childThread, NULL);
		printf("Child process after thread creation\n");
	}
	
	else{
		printf("Parent process exists\n");
	}
	return 0;
}
