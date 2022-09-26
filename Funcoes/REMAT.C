#include<stdio.h>

int matriz(int mat[])
{
    int i;
    for(i=0;i<6;i++)
    {
        mat[i] +=1;
    
    }
}

int main()
{
    int mat[] = {1,2,3,4,5,6}, i;
    matriz(mat);
    for(i=0;i<6;i++)
    {
        printf("%d", mat[i]);
    }
    return(0);
}