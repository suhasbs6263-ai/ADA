//1)Program to implement Travelling Salesman Problem.//

#include<stdio.h>
#include<conio.h>
#define N 50

int findNearest(int cost[N][N], int n, int current, int visited[])
{
   int min=9999,next=-1,j;
   for (j=0; j<n; j++)
   {
      if (!visited[j] && cost[current][j]<min)
      {
	 min=cost[current][j];
	 next=j;
      }
   }
   return next;
}

int tsp(int cost[N][N],int n,int start)
{
   int visited[N]={0};
   int total=0,current=start,i;

   visited[current]=1;
   printf("Tour:%d -> ",current);

   for (i=1;i<n;i++)
   {
     int next=findNearest(cost,n,current,visited);
     visited[next]=1;
     total+=cost[current][next];
     current=next;
     printf("%d ->",current);
   }
   total+=cost[current][start];
   printf("%d\n",start);

   return total;
}

void main()
{
  int cost[N][N],n,start,i,j,total;
  clrscr();

  printf("Enter number of cities: ");
  scanf("%d",&n);

  printf("Enter cost Matrix:\n");
  for(i=0;i<n;i++)
    for(j=0;j<n;j++)
      scanf("%d",&cost[i][j]);

  printf("Enter Starting city (0 %d):",n-1);
  scanf("%d",&start);

  total=tsp(cost,n,start);
  printf("Total cost= %d\n",total);

  getch();
}

 
