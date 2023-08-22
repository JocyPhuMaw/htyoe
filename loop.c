#include <stdio.h>
int main(){
    int students = 10;
    int fail = 0;
    int pass = 0;
    int input;
    for (int i=1; i<= 10; i++)
    {
        // printf("the roll number is %d \n" , i);
printf("enter marks for roll %d \n", i);
scanf("%d", &input);
if(input==1){
    pass++;
};

    }
    if (pass>=5)
    {
        printf("congratulations!");
    }


    return 0;
}