#include <stdio.h>
#include <ctype.h>

int main(){
		
	char letter;
	int i;
	
	
	do{
		printf("Enter a letter between A and J: ");
		scanf("%c", &letter);
		fflush(stdin);
		
	}while (letter > 'j');	
	printf("\n");
	
	printf("The next six letters are: ");
	for (i=1; i<=6; i++) printf("%c ",(char)(letter+i));	
		
	return 0;

}

