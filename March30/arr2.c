#include <stdio.h>
int main(){
	int size=5;
	int arr[size];
	for(int i=0;i<size;++i){
		scanf("%d",&arr[i]);
	}int min=arr[0];
	for(int i=0;i<size;++i){
		if(arr[i]<min){
			min=arr[i];
		}
	}printf("%d",min);
	return 0;
}  
