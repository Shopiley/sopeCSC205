#include <stdio.h>
int main(){
	char letter;
	int i = 6;
	printf("Enter a letter between A and J: ");
	scanf("%c", &letter);
	
	for (letter = 'A'; letter < 'J'; letter++)		
	{
		
		printf("%c",(char)(letter+1));
		}
	
	
	return 0;
}
