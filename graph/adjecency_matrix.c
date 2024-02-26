/* this the program for accept the vertices and edges of an graph and and stores it is an adjecent matrix , and display the adjencent matrix */
#include<stdio.h>
#include<stdlib.h>

int read_graph(int adjecent_matrix[20][20],int n)
{
    int i, j;
    for(i=1;i<n;i++)
    {
        for (j = 1; j < n; j++)
        {
           printf("\n enter 1 if %d has a node with %d else 0",i,j);
           scanf("%d",&adjecent_matrix[i][j]);
        }
        
    }
    printf("\n The Adjecency Matrix is :");
    for(i=1;i<n;i++)
    {
        for(j=1;j<n;j++)
        {
            printf("%d",adjecent_matrix[i][j]);
        }
        printf("\n");
    }
}
int display(int adjecent_matrix[20][20],int n)

{
   int i,j;
   for(i=1;i<n;i++)
   {
      for(j=1;j<n;j++)
      {
        printf("%d\t",adjecent_matrix[i][j]);
      }
      printf("\n");
   }
}
void main()
{
   int adjecent_matrix[20][20],n;
   printf("\n enter number of vertces :\n");
   scanf("%d",&n); //store value of vertices in n
   read_graph(adjecent_matrix,n);
       printf("\n given adjecency matrix is :\n");
   display(adjecent_matrix,n);
}
