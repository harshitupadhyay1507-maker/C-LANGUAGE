#include<stdio.h>
int main(){
    int n,i,a;
    int sum=0,count;
    int max=0;
       printf("Enter the numberof shipping count :");
       scanf("%d",&n);
       printf("Shipping count :");
       for(i=1;i<=n;i++){
        scanf("%d",&a);
        if(a>100){
            count+=1;
        }
        if(a>max){
            max=a;
        }
        
       } 
printf("The maximum shipping count is : %d",max);
printf("\nThe number of shipping count greater then 100 is : %d",count);
    return 0;
}