#include <stdio.h>
// this program to input tow array and sum this in new array
void main(void)
{
        int i, size = 3;
        int arry1[size], arry2[size], arry3[size];
        //input the first array 
        for (i = 0; i < size; i++)
        {
                printf("input the %d elment for first arry:", i);
                scanf("%d,", &arry1[i]);
        }
        //input the second array 
        for (i = 0; i < size; i++)
        {
                printf("input the %d elment for second arry:", i);
                scanf("%d,", &arry2[i]);
        }
        //stor the sum ine three array
        for (i = 0; i < size; i++)
        {
                arry3[i] = arry1[i] + arry2[i];
        }
         // print three array
        printf("the first arry:\n");
        printf("[");
        for (i = 0; i < size; i++)
        {
                printf("%d,", arry1[i]);
        }
        printf("]\n");

        printf("the second arry:\n");
        printf("[");
        for (i = 0; i < size; i++)
        {
                printf("%d,", arry2[i]);
        }
        printf("]\n");
        printf("the arry for result:\n");
        printf("[");
        for (i = 0; i < size; i++)
        {
                printf("%d,", arry3[i]);
        }
        printf("]");
}