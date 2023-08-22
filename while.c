#include <stdio.h>
int main(){
    
 int number, user, power;
int i=1;
    // user = number; // User တန်ဖို့ရှိတယ်
    // printf("before enter number %d\n", user);

    printf("enter a number ");
    scanf(" %d", &number);

    printf("enter power ");
    scanf(" %d", &power);
    // printf("the result is %d\n", number * number * number);

    user = number;

    printf("afer enter number %d\n", user);

    // while ( i < power)
    // {
    //     /* code */
    // }
    //  (int i = 1; i < power; i++)
    // {
    //     printf("for before  %d loop %d\n", i, user);
    

while (i<power)
{
  printf("for before %d loop %d \n", i, user);
   
   user *= number;

   i++;
}

printf(" result %d", user);



   return 0; 
}