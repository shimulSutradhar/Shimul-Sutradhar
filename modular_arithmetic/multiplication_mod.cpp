#include<stdio.h>
int mod(int arr[],int x,int m){
    int j=1;
    for(int i=0;i<x;i++)
        j*=(arr[i]%m);
    j%=m;
    return j;
}
int main(){
    freopen("input.txt","r",stdin);
    int x,y;
    scanf("%d%d",&x,&y);
    int arr[x];
    for(int i=0;i<x;i++)
        scanf("%d",&arr[i]);
    int m=mod(arr,x,y);
    printf("%d",m);
    return 0;
}
