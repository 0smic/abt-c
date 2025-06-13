#include <stdio.h>

int main(){
    int num;
    printf("Enter a number:  ");
    scanf("%d",&num);
    int oddsum = 0;
    int evensum = 0;
    for(int i = 1; i<num+1; i++){
        if(i & 1 == 1){
            oddsum += i;
        }else{
            evensum +=i;
        }
    }
    
    printf("Odd sum : %d\n", oddsum);
    printf("Even sum : %d", evensum);
    return 0;
}
