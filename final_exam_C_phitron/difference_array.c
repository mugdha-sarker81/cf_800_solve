//https://www.hackerrank.com/contests/final-exam-a-introduction-to-c-programming-a-batch-09/challenges/difference-array

#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    scanf("%d",&n);
    while(n--)
    {
        int t;
        scanf("%d",&t);
        int a[t];
        for(int i=0;i<t;i++)
        {
            scanf("%d",&a[i]);
        }
        int b[t],c[t];
        for(int i=0;i<t;i++)
        {
            b[i]=a[i];
        }
        for(int i=0;i<t-1;i++){
            for(int j=i+1;j<t;j++){
                if(b[i]>b[j]){
                    int temp=b[i];
                    b[i]=b[j];
                    b[j]=temp;
                }
            }
        }
        for(int i=0;i<t;i++)
        {
          c[i]= abs(b[i]-a[i]);
        }
        for(int i=0;i<t;i++)
        {
           printf("%d ",c[i]);
        }
        printf("\n");
    }
    return 0;
}
