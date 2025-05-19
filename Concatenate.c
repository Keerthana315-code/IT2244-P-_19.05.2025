/* Write a C program that;
Accepts two strings as input from the user.
Concatenates the two strings Displays the concatenated result. */

#include <stdio.h>
#include <string.h> 

int main() {
    char str1[100], str2[100], concatenated[200];

   
    printf("Enter first string: ");
    scanf("%s", str1);

   
    printf("Enter second string: ");
    scanf("%s", str2);

   
    strcpy(concatenated, str1);  
    strcat(concatenated, str2);  

    
    printf("Concatenated result: %s\n", concatenated);

    return 0;
}
