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
    int largest;
    
    if(num1 > num2 && num1 > num3){
        largest = num1;   
    }else if (num2 > num1 && num2 > num3){
        largest = num2;
    }else {
        largest = num3;
    }

    printf("Largest number : %d", largest);
    return 0;
}
