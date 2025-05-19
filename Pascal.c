/*
C program to generate Pascal's Triangle.

Output:
no of rows =5
          1
        1   1
      1   2   1
    1   3   3   1
  1   4   6   4   1
*/
#include <stdio.h>
int factorial(int n) {
    int fact = 1;
    for(int i = 1; i <= n; i++)
        fact *= i;
    return fact;
}

int combination(int n, int r) {
    return factorial(n) / (factorial(r) * factorial(n - r));
}

int main() {
    int rows;
    printf("Enter number of rows: ");
    scanf("%d", &rows);

    printf("no of rows = %d\n", rows);

    for(int i = 0; i < rows; i++) {
                for(int space = 0; space < rows - i - 1; space++)
            printf("  ");

                for(int j = 0; j <= i; j++)
            printf("%4d", combination(i, j));

        printf("\n");
    }

    return 0;
}

