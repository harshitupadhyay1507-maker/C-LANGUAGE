#include<stdio.h>
int main(){
    int tp,fa,tax;
    float fa1,fa2,tp1,tp2;
    printf("enter total amount : ");
    scanf("%d",&tp);
    tp1=tp*(10.0/100);
    tp2=tp*(5.00/100);
    fa1=tp-tp1;
    fa2=tp-tp2;
    if(tp>=1000){
        printf(" total amount :%f",fa1);
    }
    else if(tp=<500){
        printf(" total amount :%f",fa2);
    }
    else {
        printf(" total amount :%f",tp);
    }
}
