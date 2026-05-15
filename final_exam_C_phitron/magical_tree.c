//https://www.hackerrank.com/contests/final-exam-a-introduction-to-c-programming-a-batch-09/challenges/magical-tree-3

#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int row=  11+ n/2;
    for(int i=1;i<=row;i++)
    {
        if(i<=6+n/2)
        {
            for(int j=row-6;j>=i;j--){
                printf(" ");
            }
            for(int z=1;z<2*i;z++){
                printf("*");
            }
            printf("\n");
        }
        if(i>6+n/2)
        {
            printf("     ");
            for(int j=0;j<n;j++){
                printf("*");
            }
            printf("\n");
        }
    }
   

    return 0;
}
