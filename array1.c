#include <stdio.h>
int main(){
	int size=5;
	char arr[size];
	for(int i=0;i<size;++i){
		scanf(" %c",&arr[i]);
	}for(int i=0;i<size;++i){
		arr[i]=arr[i]&~32;
	        printf(" %c",arr[i]);
	}return 0;
}
