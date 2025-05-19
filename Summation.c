/* Give list of numbers then calculate the summation and multiplication using for loop.
e.g:-
1	2	3	4	4
summation = 15
multiplication = 120 */

#include <stdio.h>

int main() {
    int num;
    int sum = 0;
    int mul = 1;

   
    printf("How many numbers do you want to enter? ");
    scanf("%d", &num);

    int arr[num]; 
   
    printf("Enter %d numbers: ", num);
    for (int i = 0; i < num; i++) {
        scanf("%d", &arr[i]); 
    }

    
    for (int i = 0; i < num; i++) {
        sum += arr[i]; 
        mul *= arr[i]; 
	}

   
    printf("\nThe summation is: %d", sum);
    printf("\nThe multiplication is: %d\n", mul);

    return 0;
}
