//https://www.hackerrank.com/contests/final-exam-a-introduction-to-c-programming-a-batch-09/challenges/find-the-missing-number-11-3

#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--){

       long long int m;
       long long int a,b,c;
       scanf("%lld %lld %lld %lld",&m,&a,&b,&c);

      long long int min= a*b*c;
       if(m%min==0){
        printf("%lld\n",m/min);
       }
       else{
        printf("-1\n");
       }
    } 
    return 0;
}
