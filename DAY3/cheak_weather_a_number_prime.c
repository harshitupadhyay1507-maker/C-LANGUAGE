#include<stdio.h>
int main(){
    int n,i=2,prime=1;
    printf("Enter a number");
    scanf("%d",&n);
    if(n<2)
    prime =0;

    
    while(i*1<=n&&prime==1){
        if (n%i==0)
        prime=0;
        i++;
    }
    if(prime==0){
        printf("prime number");
    }
    else{
        printf("Not a prime number");

    }
    



}

