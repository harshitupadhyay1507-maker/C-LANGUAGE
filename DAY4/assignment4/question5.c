#include<stdio.h>
int main(){
    int i,n,a;
    int sum=0,count=0;
    printf("Enter the number days :");
    scanf("%d",&n);
    printf("Sales :");
    for(i=1;i<=n;i++){
        scanf("%d",&a);
        sum=sum+a;
        if(a<50){
            count+=1;

        }

    }
    printf("Total tickets Sold : %d",sum);
    printf("\nThe number of days sales less then 50 tickets : %d",count);
    
}