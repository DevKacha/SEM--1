//    1 
//   A B 
//  1 2 3 
// C D E F 
//1 2 3 4 5
#include <stdio.h>
void main() {
    int i,j,k,n = 5;
    int num =1;
    char ch = 'A';

    for (i =0; i < n; i++) {
        for (j =0; j<n - i; j++) {
            printf(" ");
        }
        for (k = 0; k<=i; k++)
		 {
        	if(i%2==0)
			{
            printf("%d ",num);
            num++;
            }
        else
           {
            printf("%c ", ch++);
           }
         }
        printf("\n");
    }
}

