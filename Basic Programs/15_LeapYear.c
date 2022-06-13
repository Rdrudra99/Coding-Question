/*
	Check if it is Leap Year
Author 			: 		RUDRA NARAYAN BOITEI
	Repository		:		github.com/Rdrudra99/CODING QUESTION
	Website			: 		rudra1999.me
*/

#include<stdio.h>

int main(){

	int number;

	printf("Enter the year: ");
	scanf("%d",&number);

	if( ((number % 4 == 0) && (number % 100 != 0))
			|| (number % 400 ==0) )
	{
		printf(" %d is a Leap year\n",number);
	}else
		printf(" %d is not Leap year\n",number);

		
}







