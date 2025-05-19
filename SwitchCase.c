/* Enter the value between 1 to 7 and create a program for following output:
Enter the number  beetween 1 to 7:1
Today is Sunday! */
#include<stdio.h>
int main()
{
	int num;
	printf("Enter the number 1 to 7: ");
	scanf("\n %d",&num);
	
	switch(num)
	{
		case 1:
		printf("Today is Sunday!");
		break;
		case 2:
		printf("Today is Monday!");
		break;
		case 3:
		printf("Today is Tuesday!");
		break;
		case 4:
		printf("Today is Wednesday!");
		break;
		case 5:
		printf("Today is Thursday!");
		break;
		case 6:
		printf("Today is Friday!");
		break;
		case 7:
		printf("Today is Saturday!");
		break;
		Default :
		printf("No days");
		
	}
	
	return 0;
}