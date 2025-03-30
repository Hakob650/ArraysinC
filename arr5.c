#include <stdio.h>
int main(){
    int arr[10];
    for(int i=0;i<10;i++){
        scanf("%d",&arr[i]);
    }int min=arr[0];
    for(int i=1;i<10;i++){
        if(arr[i]<min){
            min=arr[i];
            }
    }int max=arr[0];
    for(int i=1;i<10;i++){
        if(arr[i]>max){
            max=arr[i];
            }
    }int sum=min+max;
    printf("sum is %d",sum);
    return 0;
    }

