/*
	Convert Binary to Octal 
	Author 			: 		RUDRA NARAYAN BOITEI
	Repository		:		github.com/Rdrudra99/CODING QUESTION
	Website			: 		rudra1999.me
*/

#include<stdio.h>
#include<math.h>
int Binary2Decimal(int );
int Binary2Octal(int );

int main(){

	int number,octal;

	printf("Enter the binary number: ");
	scanf("%d",&number);
	octal = Binary2Octal(number);
	printf("Binary to Octal conversion of %d is %d \n",number,octal);
	
}


int Binary2Octal(int number){
	int octal=0,value, i=1,lastDigit;

	while( number != 0){
		lastDigit = number % 1000;
		value = Binary2Decimal(lastDigit);
		octal = octal + value * i;
		i = i * 10;
		number = number / 1000;
	}

	return octal;
}

int Binary2Decimal(int number){
	int decimal=0, i=0,lastDigit;

	while( number != 0){
		lastDigit = number % 10;
		number = number / 10;
		decimal = decimal + lastDigit * pow(2,i);
		i++;
	}

	return decimal;
}





