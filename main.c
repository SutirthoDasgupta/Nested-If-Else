#include <stdio.h>
#include <stdlib.h>

int main()
{
    float per;
    printf("Enter the percentage obtained:");
    scanf("%f",&per);
    if (per<45)
    {
        printf("Fail");
    }
    else
    {
        if (per<60)
        if (per>=45)
        {
            printf("D Grade");
        }
        if (per<70)
        if (per>=60)
        {
            printf("C Grade");
        }
        if (per<80)
        if (per>=70)
        {
            printf("B Grade");
        }
        if (per>80)
        if (per<=100)
        {
            printf("A Grade");
        }
        else
        {
            printf("Wrong Marks Input");
        }
        return 0;
    }
}
