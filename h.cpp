#include<stdio.h>
int main(){
    int n,a[99];
    scanf("%d",&n);
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
    int D[6],max=a[0];
    int temp=0;
    max=a[0];
    for(int i=0;i<n;i++){
        if(temp>0)
            temp+=a[i];
        else
            temp=a[i];
        if(temp>max)
            max=temp;
    }
    printf("max is %d\n",max);
    return 0;
}