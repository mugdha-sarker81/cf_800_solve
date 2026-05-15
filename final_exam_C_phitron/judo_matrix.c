// https://www.hackerrank.com/contests/final-exam-a-introduction-to-c-programming-a-batch-09/challenges/jadu-matrix

#include<stdio.h>
int main()
{
    int n,m;
    scanf("%d %d",&n,&m);
    int mat[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%d",&mat[i][j]);
        }
    }
    int flag=0;

    if(n==m)
    {
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                
                if(i==j || i+j==n-1){
                    if(mat[i][j]!=1)
                    {
                     flag =1;
                     break;
                    }
                }
                else if(i!=j || i+j != n-1){
                    if(mat[i][j]!=0)
                    {
                     flag=1;
                     break;
                    }
                }
                else{
                    flag=0;
                }
            }
        }
        if(flag==1){
            printf("NO");
        }
        if(flag==0){
            printf("YES");
        }
    } 
    else{
        printf("NO");
    }
    return 0;
}
