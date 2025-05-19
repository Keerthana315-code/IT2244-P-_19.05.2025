/* Write a C program to generate and print the Fibonacci series up to a specified number of terms.
The program should take the number of terms as input from the user and then display the corresponding 
Fibonacci sequence. */

#include <stdio.h>

int main() {
    int n, first = 0, second = 1, next;

    
    printf("Enter the number of terms in Fibonacci series: ");
    scanf("%d", &n);

    
    if (n <= 0) {
        printf("Please enter a positive number.\n");
        return 1;
    }

    printf("Fibonacci Series: ");

    
    for (int i = 1; i <= n; i++) {
        printf("%d ", first);
        next = first + second;
        first = second;
        second = next;
    }

    printf("\n");

    return 0;
}
