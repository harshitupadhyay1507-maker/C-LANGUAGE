#include<stdio.h>
int main(){
    int n,i,j,a,x;  
    int total=0;
	printf("Enter the Number of Days");
	scanf("%d",&n);
    printf("Enter the duration of each day");
    scanf("%d",&x);
	for(i=1;i<=n;i++){
        printf("Day %d duration",i);
        for(j=1;j<=n;j++){
		
		scanf("%d",&a);
        total=total+a;
        }
	    printf("Total duration of day %d is %d\n",i,total);
        if(total>480){
            printf("Exceed 8 hours\n");
	}
}
}