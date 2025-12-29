#include<stdio.h>
int main(){
    int i,n;
    int sumeven=0,sumodd=0;
    printf("Enter the range: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        if(i%2==0){
            sumeven=sumeven+i;
        }
    else
    sumodd=sumodd+i;
    }
    printf("The sum off even numbers upto %d=%d\n",n,sumeven);
    printf("The sum of odd numbers upto %d=%d\n",n,sumodd);
    return 0;
}