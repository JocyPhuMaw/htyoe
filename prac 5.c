#include <stdio.h>
int main()
{
    int num1;
    int num2;
    int num3;
    int num4;
    int greater1;
    int smaller1;
     int greater2;
    int smaller2;



    printf("enter first number\n");
    scanf("%d", &num1);

    printf("enter second number\n");
    scanf("%d", &num2);

    printf("enter third number\n");
    scanf("%d", &num3);

    printf("enter forth number");
    scanf("%d", &num4);

if(num1>num2){
    greater1=num1;
    smaller1=num2; 
}
else {
        greater1=num2;
        smaller1=num1;
    }
if(num3>num4){
    greater2=num3;
    smaller2=num4;
}
else{
    greater2=num4;
    smaller2=num3;
}
if(greater1<greater2){
printf("the greatest number is %d", greater2);
}
else{
    printf("the greatest number is %d", greater1);
}
 if(smaller1<smaller2){
    printf("the smallest number is %d", smaller1);
 }
 else{
    printf("the smallest number is %d", smaller2);
 }




    return 0;
}
