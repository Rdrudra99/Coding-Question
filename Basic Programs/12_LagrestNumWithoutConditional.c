/*
	Find the Largest number without conditional operator
	Author 			: 		RUDRA NARAYAN BOITEI
	Repository		:		github.com/Rdrudra99/CODING QUESTION
	Website			: 		rudra1999.me
*/

#include<stdio.h>
int findMax(int,int);

int main(){

	int a,b,c,max;
	printf("Enter a first integer: ");
	scanf("%d",&a);

	printf("Enter a second integer: ");
	scanf("%d",&b);


	max = findMax(a,b);

	printf("The maximum number is %d \n",max);


}

int findMax( int x, int y)
{
   int z = x - y;
   int i  = (z  >>  31)  &  0x1;
   int  max  =  x - i  *  z;
   return max;
}





