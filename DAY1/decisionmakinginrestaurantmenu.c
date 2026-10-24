#include<stdio.h>
int main(){
    char code,a;
    printf("Enter the code :");
    scanf("%c",&code);
    switch(code){
        case 'B': printf("price : 150 units");
        break;
         case 'P': printf("price : 200 units");
         break;
          case 'S': printf("price : 100 units");
          break;
           case 'D': printf("price : 80 units");
           break;
            case 'C': printf("price : 50 units");
            break;
            default : printf("valide code ");
        
    }

}