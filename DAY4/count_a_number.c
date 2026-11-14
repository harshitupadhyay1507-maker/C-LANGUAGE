#include<stdio.h>
int main(){
    int num, count=0,rem;
    printf("Enter the number :");
    scanf("%d",&num);
    if(num==0){
        count=1;

    }
    else {
        while(num!=0){
            num=num/10;
            count++;

        }
    }
    printf("Total Digit =%d",count);
}