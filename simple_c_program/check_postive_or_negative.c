#include <stdio.h>

int main(){
    int num;
    printf("Enter a number:  ");
    scanf("%d",&num);
    if(num <0){
        printf("Its negative");
    }else if(num == 0){
        printf("It's zero");
    }else{
        printf("It's postive");
    }

    return 0;
}
