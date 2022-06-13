/*
	Program to Count the Digits
	Author 			: 		RUDRA NARAYAN BOITEI
	Repository		:		github.com/Rdrudra99/CODING QUESTION
	Website			: 		rudra1999.me
*/

#include<stdio.h>

int main(){

	int number,lastDigit,count=0,sum=0;

	printf("Enter a positive integer: ");
	scanf("%d",&number);

	// count digits
	while(number != 0){

		//logic to split numbers
		lastDigit = number % 10;
		count++;
		sum = sum + lastDigit;
		number = number / 10;

	}

	printf("The number has %d digits and their sum is %d\n",count,sum);

	
}






