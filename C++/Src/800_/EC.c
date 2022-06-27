#include <stdio.h>
int main()
{
    int a[100][100],r,c;
    printf("Enter size of 2d array\n");
    scanf("%d %d",&r,&c);
    for(int i = 0;i<r;i++)
    for(int j = 0;j<c;j++)
    scanf("%d",&a[i][j]);
    int pass = 0;
    for(int i = 0; i < r; i++)
    for(int j = 0 ; j < c;j++)
    {
        if(a[i][j]!=a[j][i])
        {
            pass = 1;
            break;
        }
    }
    if(pass)printf("Not symm\n");
    else printf("Symm\n");

    return 0;
}