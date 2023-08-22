#include <stdio.h>

int main()
{
    int total_fish, month, result;
    printf("input total fish \n");
    scanf("%d", &total_fish);
    printf("input total month \n");
    scanf("%d", &month);

    result = fish(total_fish, month);
    printf("the result is %d\n", result);
    return 0;
}
int current_fish = 0;
int male = 0;
int fish(int total_fish, int month) // 5 fish , 3 moth
{
    // printf("functin is running -------------- \n");
    if (month > 0)
    {
        //    မ male
        //    စုံ female
        // 3 -- 45
        // 2 -- 45 total 95
        // before 1  -- 45
        // after 1 --
        if (month % 2 == 0) // female 50
        {

            current_fish = total_fish + ((total_fish - male) * 9);
            month -= 1; // 0
            fish(current_fish, month);
        }
        else // male
        {
            current_fish = total_fish + ((total_fish - male) * 9);
            month -= 1; // 0
            male = (total_fish - male) * 9;
            fish(current_fish, month);
        }
    }

    return current_fish;
}
