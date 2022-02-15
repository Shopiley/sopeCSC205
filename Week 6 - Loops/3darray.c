#include<stdio.h>
#include<stdlib.h>

int main()
{
	int x [2][3][4]= {
		{{1,2}, {3,4}, {5,6}},
		{{7,8}, {8,9}, {-9,10}}
	};
	
	for(int i =0; i<2; ++i)
	{
		for(int j =0; j<3; ++j)
		{
			for(int k =0; k<4; ++k){
				printf("Element at x[%d], [%d], [%d] = %d\n", i,j,k,x[i][j][k]); //print the element x in i,j,k at that point
				}
		}
	}			
return 0;
}
