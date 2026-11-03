#include<stdio.h>
int main(){
    int num,origanal,reverse=0,remender;
    printf("Enter the number :");
    scanf ("%d",&num);
    origanal=num;
    while(num>0){
        remender=num%10;
        reverse=reverse*10+remender;
        num=num/10;

    }
    if(reverse==origanal){
        printf("The number is palindrome");
    }
    else{
        printf("The number is not palindrome");
    }
}