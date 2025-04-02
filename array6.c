#include <stdio.h>
int main(){
	int size=10;
	int arr[size];
	int target=0;
	printf("enter the target");
	for(int i=0;i<size;++i){
		scanf("%d",&arr[i]);
	}for(int i=0;i<size;++i){
		if(arr[i]==target){
			printf("%d",i);
			return 0;
		}
	}printf("-1\n");
}
