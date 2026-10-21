#include <stdio.h>
int main (){
    int a;
    printf("Enter a Number : ");
    scanf("%d",&a);
    switch(a){
        case 1:
        printf("sunday");
        break;
        case 2:
        printf("\nmonday");
        break;
        case 3:
        printf("\ntuesday");
        break;
        case 4:
        printf("\nwednesday");
        break;
        case 5:
        printf("\nthursday");
        break;
        case 6:
        printf("\nfriday");
        break;
        case 7:
        printf("\nsaturday");
        default:
        printf("Enter a valid number,(1to7)");
        break;
    }
}