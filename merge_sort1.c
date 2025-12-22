#include <stdio.h>

void merge(int a[10], int low, int mid, int high)
{
    int i, j, k, c[10];
    i = low;
    k = low;
    j = mid + 1;

    while ((i <= mid) && (j <= high))
    {
        if (a[i] <= a[j])
        {
            c[k] = a[i];
            i++;
            k++;
        }
        else
        {
            c[k] = a[j];
            j++;
            k++;
        }
    }

    while (i <= mid)
    {
        c[k] = a[i];
        i++;
        k++;
    }

    while (j <= high)
    {
        c[k] = a[j];
        j++;
        k++;
    }

    for (i = low; i <= k - 1; i++)
        a[i] = c[i];
}

void merge_sort(int a[10], int low, int high)
{
    int mid;
    if (low < high)
    {
        mid = (low + high) / 2;
        merge_sort(a, low, mid);
        merge_sort(a, mid + 1, high);
        merge(a, low, mid, high);
    }
}

int main()
{
    int a[10], n, i;
    printf("Enter number of elements:");
    scanf("%d", &n);

    printf("Enetr the arry elements:\n");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    merge_sort(a, 0, n - 1);

    printf("Sorted list is:\n");
    for (i = 0; i < n; i++)
        printf("%d\n", a[i]);

    
    return 0;
}
