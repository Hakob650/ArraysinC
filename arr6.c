#include <stdio.h>
int main() {
    int arr[3][3];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            scanf("%d",&arr[i][j]);
        }
    }for(int i=0;i<3;i++){
        int rowsum=0;
         for(int j=0;j<3;j++){
             rowsum+=arr[i][j];
         }
    printf("rowsum is %d\n",rowsum);
   } return 0;
    }
    
