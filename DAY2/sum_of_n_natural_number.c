#include<stdio.h>
int main(){
    int n;
    int i=1,sum=0;
    printf("Enter n: ");
    scanf("%d",&n);
    while(i<=n){
        sum=sum+i;
        i++;

    }
    printf("sum = %d",sum);
    return 0;

}