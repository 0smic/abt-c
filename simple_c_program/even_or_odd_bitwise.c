#include <stdio.h>

int main(){
    int num;
    printf("Enter a number:  ");
    scanf("%d",&num);
    /*
    Every odd number would have the last bit (0000001) is set and even doesn't
    */
    if(num & 1 == 1){
        printf("Number is Odd!");
    }else{
        printf("Number is Even!!");
    }
    return 0;
}
