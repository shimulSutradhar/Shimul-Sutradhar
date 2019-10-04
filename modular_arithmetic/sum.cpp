#include<stdio.h>
int sumMod(int arr[],int x,int b){
    int mod=0;
    for(int i=0;i<x;i++){
        mod+=arr[i]%b;
    }
    mod%=b;
    return mod;
}
int main(){
    //freopen("input.txt","r",stdin);
    int x,y;
    scanf("%d%d",&x,&y);
    int arr[x];
    for(int i=0;i<x;i++)
        scanf("%d",&arr[i]);
    int mod=sumMod(arr,x,y);
    printf("%d",mod);
    return 0;
}
