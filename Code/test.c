#include<stdio.h>
int main(void)
{
    int i;
    int sum = 0;
    for (i = 0; i < 20; i++)
    {
        if (i % 2 == 0)
        {
            sum += i;
        }
    }
    return 0;
}
