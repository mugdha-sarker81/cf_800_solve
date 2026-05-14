#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    int mat[t][3];
    for(int i=0;i<t;i++)
    {
        for(int j=0;j<3;j++){
            scanf("%d",&mat[i][j]);
        }
    }
    int flag=0;
    for(int i=0;i<t;i++)
    {
        int sum= mat[i][0]+mat[i][1]+mat[i][2];
        if(sum>=2)
        {
            flag++;
        }
    } 
    printf("%d",flag);
 
    return 0;
}
