#include<stdio.h>
int main(){
    int a,i=0;
    printf("Enter a number");
    scanf("%d",a);
    while(i<5){
        scanf("%d",&a);
        printf("%d\n",a);
        i++;
    }
    return 0;
}