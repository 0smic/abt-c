#include <stdio.h>

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

    printf("Largest number : %d", (num1>num2) ? (num1 >num3? num1: num3): (num2 > num3 ? num2: num3));
    return 0;
}
