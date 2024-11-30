#include <stdio.h>

int main(){
	int arr[100],index,a,n;
	printf("nhap so luong phan tu : ");
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		printf("phan tu thu %d : ",i+1);
		scanf("%d",&arr[i]);
	}
	printf("nhap index : ");
	scanf("%d",&index);
	for(int i=n;i>index;i--){
		arr[i]=arr[i-1];
	}
	printf("nhap so muon them : ");
	scanf("%d",&a);
	arr[index]=a;
	for(int i=0;i<a;i++){
		printf("%d\n",arr[i]);
	}
	return 0;
}
