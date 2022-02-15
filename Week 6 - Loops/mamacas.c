#include<stdio.h>
#include <ctype.h>

int main() {

char menu;
int num, price;

printf("Welcome to Mama Cas Restuarant\n");
printf("What would you like to order\n Press\n P = Poundo Yam & Edinkaiko soup --- N3200 \n F = Fried Rice & Chicken --- N3000 \n A = Amala & Ewedu Soup --- N2500 \n E = Eba & Egusi Soup --- N2000 \n W = White Rice & Stew --- N2500\n");
scanf("%c", &menu);
printf("How many portions please:");
scanf("%d", &num);

switch(toupper(menu)){
	
	case 'P':
	//case 'p': //you can do this instead of toupper
	price = 3200;
	break;
	
	case 'F':
	price = 3000;
	break;
	
	case 'A':
	price = 2500;
	break;
	
	case 'E':
	price = 2000;
	break;
	
	case 'W':
	price = 2500;
	break;
	
	default:
	printf("Please enter a valid choice");	
}

price = num * price;
printf("Total price is: %d \n", price);

return 0;

}
