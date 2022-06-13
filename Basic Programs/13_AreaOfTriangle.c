/*
	Find the area of Triangle when sides are given
Author 			: 		RUDRA NARAYAN BOITEI
	Repository		:		github.com/Rdrudra99/CODING QUESTION
	Website			: 		rudra1999.me
*/

#include<stdio.h>
#include<math.h>

int main(){

	double a,b,c,s,area;

	printf("Enter the 3 sides of the triangle: ");
	scanf("%lf %lf %lf",&a,&b,&c);

	s = (a+b+c)/2;

	area = sqrt(s*(s-a)*(s-b)*(s-c));

	printf("Area of the triangle is %lf\n",area);
	return 0;


}







