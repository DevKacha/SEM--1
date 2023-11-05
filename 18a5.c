/*Swap Two Numbers Using Call By Value And Call By Reference..*/ 

#include<stdio.h>

void swap(int *a, int *b);

void main(){
    int a, b;
    printf("Enter The Value For a:");
    scanf("%d", &a);
    printf("Enter The Value For b:");
    scanf("%d", &b);

    swap(&a, &b);
    printf("Swap Value a And b: %d %d", a, b);
}

void swap(int *a, int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}
