#include <stdio.h>

int main(){
    
    /* INPUT */
    int num;
    printf("Enter The  Number: ");
    scanf("%d",&num);
    
    /* LOGIC */
    
    int remain= 0;
    int sum = 0;
    while(num != 0){
        remain = num % 10;
        sum += remain;
        num /= 10;
    }
    printf("sum = %d", sum);

}
