#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <pthread.h>

int mypid, myppid;
void *childcreator(void* args){
	printf("This is the process ID %d\n", mypid);
	printf("This is the parent ID %d\n", myppid);	
	return NULL;
}

int main() {
	int num, gap;
	pthread_t jack;
	printf("How many process would you like to create? ");
	scanf("%d", &num);
	
	fork()*num;
	gap = pthread_create(&jack, NULL, &childcreator, NULL);
	mypid = getpid();
	myppid = getppid();
	
	if (gap==0){
	pthread_create(&jack, NULL, &childcreator, NULL);
	}
return 0;	
}

/*
#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <pthread.h>

int mypid, myppid;
void *childThread(void* args){
  printf("The process ID %d\n", mypid);
  printf("The parent ID %d\n", myppid);
  return NULL;
}
int main(){
  int num_prs, gap;
  pthread_t pid;
  printf("How many processes do you want: ");
  scanf("%d", &num_prs);

    fork()*num_prs;

  gap=pthread_create(&pid, NULL, &childThread, NULL);
  mypid = getpid();
  myppid = getppid();
  if(gap==0){
    pthread_create(&pid, NULL, &childThread, NULL);
  }
  return 0;
}
*/
