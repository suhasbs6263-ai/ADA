// 5. Write a program to implement Merge sort algorithm for sorting a list of integers in ascending order.

#include<stdio.h>
#include<conio.h>
void merge(int a[10],int low,int mid,int high)
{
 int i,j,k,c[10];
 i=low;
 k=low;
 j=mid+1;
 while((i<=mid)&&(j<=high))
 {
  if(a[i]<=a[j])
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
  while(i<=mid)
  {
  c[k] = a[i];
  k++;
  j++;
  }
  while (j<=high)
  {
   c[k] =a[j];
   k++;
   j++;
  }

  for(i=low; i<=k-1; i++)
  a[i] = c[i];
  }
  void mergesort(int a[10], int low,int high)
  {
   int mid;
   if(low<high)
   {
    mid=(low+high)/2;
    mergesort(a,low,mid);
    mergesort(a,mid+1,high);
    merge(a,low,mid,high);
    }
    }
    void main()
    {
     int i,n,a[10];
     clrscr();
     printf("enter the number of the elements\n");
     scanf("%d",&n);
     printf("enter the array elements\n");
     for(i=0; i<n; i++)
     scanf("%d",&a[i]);
     mergesort(a,0,n-1);
     printf("sorted list is\n");
     for(i=0;i<n; i++)
     printf("%d\t",a[i]);
     getch();
    }
