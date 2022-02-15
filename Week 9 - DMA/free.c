#include <stdio.h>
#include <stdlib.h>

int main()
{
	int *ptr, *ptr1;
	int n, i;
	
	n=5;
	printf("Enter number of elements: %d\n", n);
	
	ptr = (int *)malloc(n * sizeof(int));
	
	ptr1 = (int *)calloc(n, sizeof(int));
	
	if (ptr == NULL || ptr1 == NULL)
	{
		printf("Memory not allocated\n");
		exit(0);
	}
	
	else{
		printf("Memory successfully allocated using malloc.\n");
		
		free(ptr);
		printf("Malloc memory successfully freed. \n");
		
		printf("Memory successfully allocated using malloc.\n");
		
		free(ptr1);
		printf("Malloc memory successfully freed. \n");
		
		
	}
	return 0;
}
