#include<stdio.h>
int main(){
    int adjmat[20][20],n;
    printf("Enter number of vertices :");
    scanf("%d",&n);
    for(int i=1;i<n;i++)
    {
        for( int j=1;j<n;j++)
        {
            printf("\n enter 1 if %d has node with %d else 0",i,j);
            scanf("%d",&adjmat[i][j]);
        }
            printf("\n");
    }
    printf("\n The adcency matrix is :");
    for(int i=1;i<n;i++)
    {
        for( int j=1;j<n;j++)
        {
            printf("%d",adjmat[i][j]);
        }
            printf("\n");
    }

}