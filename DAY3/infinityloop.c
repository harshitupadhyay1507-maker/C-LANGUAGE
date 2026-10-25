#include<stdio.h>
int main(){
    int a,n,i=1;
    scanf("%d",&n);
    printf("enter thae number : "); 
    while(i<=n){
        scanf("%d",&a);
        if (a<0)
        continue;
        printf("%d",a);
        
    }
}