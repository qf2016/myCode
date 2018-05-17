#include<stdio.h>
int main(void)
{
    printf("It is a test.c file");
    int i;
    int sum = 0;
    int a = sum;
    for (i = 0; i < 20; i++)
    {
        if (i % 2 != 0)
        {
            sum += i;
        }
    }
    printf("sum is: %d" sum);
    return 0;
}
