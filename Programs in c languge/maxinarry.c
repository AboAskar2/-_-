#include <stdio.h>
void main(void)
{
    int size = 5, i, max = 0;
    int arry[size];
    for (i = 0; i < size; i++)
    {
        printf("input the %d elment", i);
        scanf("%d ", &arry[i]);
    }
    for (i = 0; i < size; i++)
    {
        max = max;
        if (arry[i] > max)
        {
            max = arry[i];
        }
    }
    printf("the max number in ary=%d", max);
}