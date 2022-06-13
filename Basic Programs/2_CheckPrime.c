/*
	Check if the Number is Prime
	Author 			: 		RUDRA NARAYAN BOITEI
	Repository		:		github.com/Rdrudra99/CODING QUESTION
	Website			: 		rudra1999.me
*/

#include<stdio.h>

int main(){

	int number,i,flag=0;

	printf("Enter a positive integer: ");
	scanf("%d",&number);
	
	//Check if it is Prime
	for(i=2; i <= number/2;i++){
			if(number % i==0)
			{
				flag =1;
			}
		}

	if(number==1)
		printf("The number is Neither Prime nor Composite \n");
	else if(flag ==1 )
		printf("The number is Composite \n");
	else
		printf("The number is Prime \n");

}





















