/* Write a code for small astrology based on your life path number for that
get date of from user then calculate life path number.(use switch case)
e.g:-
Date : 23
Calculation for life path number:
a = date %10  3
b = date /10  2
c = a + b

if life path number :
1.Lucky
2.Carefully do your work
3.Stronger
4.Happy
5.Can get help
6.Doubt
7.Sad
8.Like
9.Courage
 */

#include<stdio.h>
int main()
{
	int date;
	printf("Enter your date : ");
	scanf("\n%d",&date);
	
	int a = date % 10;
	int b = date / 10;
	int c = a+b;
	
	switch(c)
	{
		case 1:
		printf("Lucky");
		break;
		case 2:
		printf("Carefully do your work");
		break;
		case 3:
		printf("Stronger");
		break;
		case 4:
		printf("Happy");
		break;
		case 5:
		printf("Can get help");
		break;
		case 6:
		printf("Doubt");
		break;
		case 7:
		printf("Sad");
		break;
		case 8:
		printf("Like");
		break;
		case 9:
		printf("Courage");
		break;
		default :
		printf("No numbers");
	}
	
	return 0;
}