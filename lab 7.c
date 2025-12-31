// 7. Implement function to print In-Degree, Out-Degree and to display that adjacency matrix.

#include<stdio.h>
#include<conio.h>
void main()
{
 int n,j,i;
 int graph[10][10];
 clrscr();

 printf("enter number of vertices:");
 scanf("%d",&n);

 printf("enter adjancy matrix(%d * %d):\n",n,n);
 for(i=0;i<n;i++) {
  for(j=0;j<n;j++) {
    scanf("%d",&graph[i][j]);
  }
 printf("\n");
 }

 printf("\n Vertex \t indegree\t outdegree\n");
 for(i=0;i<n;i++) {
  int indegree=0, outdegree=0;
  for(j=0;j<n;j++) {
  if(graph[i][j]==1) outdegree++;
  if(graph[j][i]==1) indegree++;
  }
  printf("%d\t %d\t\t %d\n",i,indegree, outdegree);
  }
  getch();
}
