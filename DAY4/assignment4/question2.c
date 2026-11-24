#include<stdio.h>
int main(){
int i,j,n,a;
int temp,sum=0;
printf("Enter the number of days :");
scanf("%d",&n);
printf("Enter the duration of each day :");
scanf("%d",&a);
for(i=0;i<=n;i++){
    printf("Day %d temprature :",i);
    for(j=0;j<=a;j++){
        scanf("%d",&temp);
        sum=sum+temp;

    }
    printf("Total duration of day %d is %d\n",i,sum);
}
}