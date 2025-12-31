// 3. Write a program to find minimum and maximum value in an array using divide and conquer.
#include<stdio.h>
#include<conio.h>

int max, min;
int a[100];

void minmax(int i, int j)
{
    int max1, min1, mid;

    if (i == j)
    {
        max = min = a[i];
    }
    else
    {
        if (i == j - 1)
        {
            if (a[i] < a[j])
            {
                max = a[j];
                min = a[i];
            }
            else
            {
                max = a[i];
                min = a[j];
            }
        }
        else
        {
            mid = (i + j) / 2;
            minmax(i, mid);
            max1 = max;
            min1 = min;
            minmax(mid + 1, j);
            if (max < max1)
                max = max1;
            if (min > min1)
                min = min1;
        }
    }
}

void main()
{
    int i, num;
    printf("\n enter the total number of numbers: ");
    scanf("%d", &num);
    printf("enter the numbers:\n");
    for (i = 1; i <= num; i++)
        scanf("%d", &a[i]);
    minmax(1, num);
    printf("minimum element in an array: %d\n", min);
    printf("maximum element in an array: %d\n", max);
    getch();
}
