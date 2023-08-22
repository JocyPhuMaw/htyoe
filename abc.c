#include <stdio.h>
int main(){
//    int luckyno1 = 3;
//    int luckyno2 = 11;
//    int luckyno3 = 35;
   int input;
   printf("enter your number");
   scanf("%d", &input);
   switch (input){
    case 3:
    printf("you win the number is 3 \n");
    break;

     case 11:
    printf("you win the number is 11 \n");
    break;
    case 35:
    printf("you win the number is 35 \n");
    break;
   
   default:
   printf("try again \n");
    break;
   }

if(input>40){
    printf("your number is greater than lucky number");
}
    return 0;
}