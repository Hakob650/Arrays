i#include <stdio.h>
int main(){
	int size=5;
	int arr[size];
	for(int i=0;i<size;++i){
		scanf("%d",&arr[i]);
	}int count1=0;
	int count2=0;
	for(int i=0;i<size;++i){
		if(arr[i]%2==0){
			count1++;
		}else{
			count2++;
		}
	}int i=0;
	for(int j=0;j<size;++j){
		if(arr[j]%2==0){
			int tmp=arr[j];
		for(int k=j;k>i;k--){
			arr[k]=arr[k-1];
		}arr[i++]=tmp;
	        } 
        }for(int i=0;i<size;++i){
		printf("%d",arr[i]);
	}return 0;
}
	
