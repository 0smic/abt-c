#include <stdio.h>

int main(){
    
    /* INPUT */
    int num1, num2;
    printf("Enter Frist Number: ");
    scanf("%d",&num1);
    printf("Enter Second Number: ");
    scanf("%d",&num2);
    
    /* LOGIC */
    if ((num1 ^ num2) == 0){
        printf("They are equal");
    }else {
        printf("Not equal");
    }
    return 0;

}
