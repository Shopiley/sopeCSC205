#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>

/* int main(){
	pid_t mypid, myppid;
	mypid = getpid();
	myppid = getppid();
	printf("PID: %d\n", mypid);
	printf("PPID: %d\n", myppid);
	
	return 0;

} 

int main() {
	fork();
	printf("fork() system call will print me twice!\n");
	return 0;
} */


void folklore()
{
	int queue = 15, stack=25, tree=30, map=25,x,k;
	x = ((stack<=map)&&(tree>queue));
	k = ((map==queue)||(stack>tree));
	
	//child process
	if (fork() == 0)
		printf("xprocess = %d\n", x);
	
	//parent process	
	else
	printf("kProcess = %d\n", ++k);	
}


int main() {
	folklore();
	folklore();
	return 0;
}






















