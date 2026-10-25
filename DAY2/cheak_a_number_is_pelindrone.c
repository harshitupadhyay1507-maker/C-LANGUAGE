#include<stdio.h>
int main(){
    int n,digit,reverse=0,orginal;
    printf("Enter a number : ");
    scanf("%d"&n);
    orginal=n;
    while(n>0){
        digit=n%10;
        reverse=reverse*10+digit;
        n=n/10;

    }
    if(orginal==reverse)
    printf("palindron");
    else 
    printf("Not palindron");
}