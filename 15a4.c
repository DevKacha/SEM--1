//Search element in array.
#include <stdio.h>

void main() {
    int i,array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int target ; 
     printf("Search a element: " );
     scanf("%d",&target);
    int found =0; 

    for ( i = 0; i < 10; i++) {
        if (array[i] == target) {
            found = 1;
            break; 
        }
    }
    if (found) {
        printf("Element %d is found in the array.\n", target);
    } else {
        printf("Element %d is not found in the array.\n", target);
    }
}

