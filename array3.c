#include <stdio.h>
int main(){
	int size=5;
	char arr[size];
	for(int i=0;i<size;++i){
		scanf(" %c",&arr[i]);
	}for(int i=size-1;i>=0;i--){
		printf(" %c",arr[i]);
	}return 0;
}
