// 10. Write a program that implements Prim's algorithm to generate minimum cost spanning Tree.

 #include<stdio.h>
 #include<conio.h>
 void main()
 {
 int ne=1,n,min,vis[10]={0},cost[10][10],i,j,u,v,mincost=0;
 clrscr();
 printf("enter the number of edges in the graph\n");
 scanf("%d",&n);
 printf("enter the cost adjacency matrix\n");
 for(i=1;i<=n;i++)
 for(j=1;j<=n;j++)
 {
 scanf("%d",&cost[i][j]);
 }
 vis[1]=1;
 while(ne<n)
 {
 min=999;
 for(i=1;i<=n;i++)
 for(j=1;j<=n;j++)
 if((vis[i]==1)&&(cost[i][j]<min))
 {
 min=cost[i][j];
 v=i;
 u=j;
 }
 if(vis[u]==0)
 {
 printf("%d-->%d=%d\n",v,u,min);
 ne++;
 mincost=mincost+min;
 vis[u]=1;
 }
 cost[u][v]=cost[v][u]=999;
 }
 printf("minimum cost=%d\n",mincost);
 getch();
 }