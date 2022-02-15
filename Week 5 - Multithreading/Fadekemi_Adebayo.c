#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <pthread.h>

void * paystack(void * stack) {
    char * opera = (char *) stack;
    printf("%ld \t %s\n", pthread_self(), opera);
};

int main(){

    int no_chal, num, i, a; 
    char chal [50] [50]; //declare multi dimensional array bcoz of nested			
	
    printf("Hello merchant! Welcome to Paystack. I'm here to help with the operation challenges you may be facing.\n");		
	
    printf("How many challenges are you facing? "); //2
    scanf("%d", &no_chal);
    
    int no_id = no_chal*(no_chal + 1);
    pthread_t chal_id[no_id]; // size of array 
    
    printf("Please type in your challenge without a space in between.\n");
    
    for (num=0; num < no_chal; num++){
    printf("Input challenge here: "); 
    scanf("%s", chal[num]); //each challenge inputed will be an item in the array, chal
    }
    
    printf("Below are your challenge(s) with their corresponding IDs so they can be tracked easily\n");
    
    for (i=0; i <= no_chal; i++){ //2 i.e 1,2
    	for (a=0; a<(i*2); a++){ // 1 i.e 1,2    2 i.e 1,2,3,4
    	pthread_create(&chal_id[no_id],NULL, &paystack, (void*)chal[i-1]); //array index
    }	
    }	
    
     for (i=0; i <= no_chal; i++){ //another for loop to print different IDs
    	for (a=0; a<(i*2); a++){ 
    	pthread_join(chal_id[no_id],NULL);
    }	
    }	
    
    
	return 0;
 }
