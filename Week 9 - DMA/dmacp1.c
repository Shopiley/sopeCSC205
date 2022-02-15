#include <stdio.h>
#include <stdlib.h>

int main(){

	int *a, *b, i, j, *sum;
	
	a = (int*)malloc(100* sizeof(int));
	b = (int*)malloc(100* sizeof(int));
	sum = (int*)malloc(100* sizeof(int));
	
	int a[3] = {667, 422, 233};
	int b[3] = {611, 4, 33};
	
	for (i=0; i<3; ++i){		
			sum[i]= a[i]+ b[i];	
	}
	
	for (i=0; i<3; ++i){
			printf("%d\n", sum[i]);
	}
	
	
	return 0;
}
