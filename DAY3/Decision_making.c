#include<stdio.h>
int main(){
    int a;
    printf("enter a number");
    scanf("%d",&a);
    switch(a){
        case 1:
        printf("chur chur naan");
        break;
        case 2:
        printf("soup");
        break;
        case 3:
        printf("chicken tikka");
        break;
        case 4:
        printf("muttan seekh");
        break;
        case 5:
        printf("tandoori chichen");
        default:
        printf("Enter a valid number");
    }
}