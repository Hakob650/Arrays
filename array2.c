#include <stdio.h>
int main(){
	int size=5;
	int arr[size];
	for(int i=0;i<size;++i){
		scanf("%d",&arr[i]);
	}int count=0;
	for(int i=0;i<size;++i){
		if(arr[i]%2==1){
			count++;
		}
	}printf("%d",count);
	return 0;
}
