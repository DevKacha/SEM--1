/*Pass An Array In Function To Print Array Elements..*/


#include <stdio.h>
void display(int a, int b) {
  printf("%d\n", a);
  printf("%d\n", b);
}

int main() {
  int arr[] = {1, 2, 3, 4};
  display(arr[1], arr[2]); 
  return 0;
}
