#include <stdio.h>
int main(){
    int arr[10];
    for(int i=0;i<10;i++){
        scanf("%d",&arr[i]);
    }int max=arr[0];
    int index=0;
    for(int i=1;i<10;i++){
        if(arr[i]>max){
            max=arr[i];
            index=i;
        }
    }printf("index is %d",index);
    return 0;
}
