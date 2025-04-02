#include <stdio.h>
int main(){
	int size=5;
	int arr[size];
	for(int i=0;i<size;++i){
		scanf("%d",&arr[i]);
	}for(int i=0;i<size-1;++i){
		if(arr[i]<=arr[i+1]){
			printf("No\n");
			return 0;
		}else{};
	}printf("Yes");
}
