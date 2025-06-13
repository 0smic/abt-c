#include <stdio.h>

int main(){
    
    /* INPUT */
    int num;
    printf("Enter the range 0 - ");
    scanf("%d",&num);
    
    /* LOGIC */
    int sum = 0;
    for (int i = 0; i<num ; i++){
        if(i % 5 == 0){
            printf("%d \n", i);
            sum += i;
        }
    }
    
    printf("\n sum == %d", sum);
}
