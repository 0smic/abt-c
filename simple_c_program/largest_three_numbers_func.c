#include <stdio.h>


int biggest(int a , int b){
    if(a>b) return a;
    return b;
}

int main(){
    /*   INPUT   */
    int num1, num2, num3;
    printf("Enter first number:  ");
    scanf("%d",&num1);
    printf("Enter second number:  ");
    scanf("%d",&num2);
    printf("Enter third number:  ");
    scanf("%d",&num3);
    
    /* LOGIC */

    printf("Largest number : %d",biggest(biggest(num1 , num2), num3));
    return 0;
}
