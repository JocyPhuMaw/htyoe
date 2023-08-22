#include <stdio.h>
int main(){
  
  int number;
  int result;
  printf("enter a number");
  scanf("%d", &number);

  for (i = 0; i < 5; i++)
  {
    printf("the %d result %d", i, number);
    number*=number;
  
  }
  printf("the result %d", number);
  return 0;
  
//   int time;
//   int add;
// int i=1;
// printf("enter a number");
// scanf("%d", &number);

// printf("enter time");
// scanf("%d", &time);

//   while (i<time)
//   {
//     printf(" %d get %d", i, add);
//     i++;
//   }
  
//   printf("result %d", &add);


    return 0;
    
    }