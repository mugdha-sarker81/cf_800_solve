//Problem : https://codeforces.com/problemset/problem/158/A

#include<stdio.h>
int main()
{
    int t,target;
    scanf("%d",&t);
    scanf("%d",&target);
    int arr[t];
    for(int i=0;i<t;i++){
        scanf("%d",&arr[i]);
    }
 
    int flag=0;
    for(int i=0;i<t;i++){
        if(arr[i]>=arr[target-1] && arr[i]>0){
            flag++;
        }
    }
    printf("%d",flag);
    return 0;
}
