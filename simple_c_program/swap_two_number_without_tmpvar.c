#include <stdio.h>


void swap(int *ptr1, int *ptr2){
    *ptr1 = *ptr1 + *ptr2;
    *ptr2 = *ptr1 - *ptr2;
    *ptr1 = *ptr1 - *ptr2;
}

int main(){
    
    /* INPUT */
    int a,b;
    printf("Enter a: ");
    scanf("%d",&a);
    printf("Enter b: ");
    scanf("%d",&b);
    
    /* LOGIC */
    printf("a == %d, b == %d\n", a, b);
    swap(&a, &b);
    printf("a == %d, b == %d", a, b);
}
