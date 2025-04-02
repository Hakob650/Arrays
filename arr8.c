#include <stdio.h>
int main(){
	int size=5;
	int arr[size];
	for(int i=0;i<size;++i){
		scanf("%d",&arr[i]);
	}int left=0;
	int right=size-1;
	while(left<right){
		int mid=left+(right-left)/2;
		if(mid%2==1){
		 mid--;
		}

		if(arr[mid]==arr[mid+1]){
			left=mid+2;
		}else{
			right=mid;
		}
	}printf("%d\n",arr[left]);
	return 0;
}
