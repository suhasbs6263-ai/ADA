// 9. Write a program to implement the backtracking algorithm for the sum of subsets problem

#include <stdio.h>
#include<conio.h>
int x[100];
void sumOfSubset(int arr[], int n, int index, int currentSum, int target)
      {
    int i;
    if (currentSum == target)
     {
    printf("Subset: { ");
    for ( i = 0; i < n; i++)
       {
        if (x[i] == 1)
        printf("%d ", arr[i]);
    }
    printf("}\n");
    return;
    }
    if (index == n || currentSum > target)
    return;
    // ---- Include arr[index] ----
    x[index] = 1;
    sumOfSubset(arr, n, index + 1, currentSum + arr[index], target);
    // ---- Exclude arr[index] ----
    x[index] = 0;
    sumOfSubset(arr, n, index + 1, currentSum, target);
}
void main() {
    int n, target,arr[30],i;
    clrscr();
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter the elements:\n");
    for ( i = 0; i < n; i++)
    scanf("%d", &arr[i]);
    printf("Enter target sum: ");
    scanf("%d", &target);
    printf("\nSubsets whose sum = %d:\n", target);
    sumOfSubset(arr, n, 0, 0, target);
    getch();
}
