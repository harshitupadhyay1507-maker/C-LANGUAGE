#include<stdio.h>
int main(){
int i,n,a,b;
int count=0;
printf("Enter the number of subjects");
scanf("%d",&n);
printf("Enter the Threshold marks :");
scanf("%d",&b);
printf("Enter the marks of subjects :");

for(i=1;i<=n;i++){
    scanf("%d",&a);
    if(a>=b){
        count+=1;

    }

}
printf("The number of subjects marks greater than or equal to threshold marks is : %d",count);
}