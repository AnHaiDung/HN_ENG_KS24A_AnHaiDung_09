#include <stdio.h>

int main(){
	int arr[100],index,n;
	printf("nhap so luong phan tu : ");
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		printf("phan tu thu %d : ",i+1);
		scanf("%d",&arr[i]);
	}
	printf("nhap index : ");
	scanf("%d",&index);
	for(int i=index;i<n;i++){
		arr[i]=arr[i+1];
	}
	for(int i=0;i<n-1;i++){
		printf("%d\n",arr[i]);
	}
	return 0;
}
