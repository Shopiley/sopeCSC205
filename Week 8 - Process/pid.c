#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <pthread.h>

int process, pprocess;
void *childThread(void *args)
{
	printf("The process ID is %d\n", process);
	printf("The parent process ID is %d\n", pprocess);
	return NULL;
}

int main(){
	pthread_t nid;
	process = getpid();
	pprocess = getppid();
 	if (fork()==0){
 		pthread_create(&nid, NULL, &childThread, NULL);
 	}
	return 0; 
}
