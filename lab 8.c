// 8. Write program to implement backtracking algorithm for solving problems like N queens
#include <stdio.h>
#include <stdlib.h>
#define MAX 20 
int board[MAX];
int n;

void printSolution() 
{
int i,j;
	 for ( i = 0; i < n; i++)
{
		  for ( j = 0; j < n; j++)
 {
	if (board[i] == j)
	 printf("Q ");
	 else
	 printf("* ");
  }
  printf("\n");
 }
printf("\n");
}
int isSafe(int row, int col)
{
int i;
for ( i = 0; i < row; i++)
{
if (board[i] == col || abs(board[i] - col) == abs(i - row))
return 0;
 }
 return 1;
}
void solveNQueens(int row)
{
int col;
 if (row == n)
	{
 printSolution();
return;
	 }
for ( col = 0; col < n; col++)
{
 if (isSafe(row, col))
 {
board[row] = col;
solveNQueens(row + 1);
  }
    }
}

int main()
 {
	 printf("Enter the number of queens: ");
	 scanf("%d", &n);
	 if (n < 1 || n > MAX)
	 {
	 printf("Please enter a value between 1 and %d.\n", MAX);
	  return 1;
	 }
	 printf("\nSolutions for %d-Queens problem:\n\n", n);
	 solveNQueens(0);
	 return 0;
}
