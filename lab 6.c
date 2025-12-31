// 6. Write C program that accepts the vertices and edges for a graph and store it as an adjacency
#include<stdio.h>
#include<conio.h>
void main()
{
 int n,i,j,u,v,e;
 int adj_matrix[50][50];
 clrscr();
 printf("enter the number of vertices\n");
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
  for(j=0;j<n;j++)
  {
   adj_matrix[i][j]=0;
   }
  }
   printf("enter the number of edges:");
   scanf("%d",&e);
   printf("enter the edges(u,v):\n");
   for(i=0;i<e;i++)
   {
   scanf("%d%d",&u,&v);
   adj_matrix[u-1][v-1]=1;
   adj_matrix[v-1][u-1]=1;
   }
    printf("the adjancencuy matrix is:\n");
    for(i=0;i<n;i++)
    {
     for(j=0;j<n;j++)
     {
      printf("%d",adj_matrix[i][j]);
     }
     printf("\n");
     getch();
    }
   }
