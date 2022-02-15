#include <stdio.h>
#include <unistd.h>

int main(){
 if (fork()==0) //prints out only the child
 
 	if (fork())
 		printf("Job well done!!\n");
 
 return 0;
}
