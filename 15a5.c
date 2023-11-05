//Input a string in character array and print string and length of string.
#include <stdio.h>
#include <string.h>

void main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);
  
    int length = strlen(str);
    
    printf("Entered string: %s\n", str);
    printf("Length of the string: %d\n", length);
}

