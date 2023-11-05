//* * * * *
// * * * * 
//  * * *
//   * *
//    *
#include <stdio.h>

void main() {
    int n = 5,i,j,k;

    for (i = 0; i < n; i++) {
        for (j = 0; j < i; j++) {
            printf(" ");
        }
        for (k = 0; k < n - i; k++) {
            printf("* ");
        }
        printf("\n");
    }
}









