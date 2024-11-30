#include <stdio.h>

int main(){
	
	int array[100];
	int index,n,a;
	printf("nhap so luong phan tu ");
	scanf("%d",&a);
	
	for (int i=0;i<a;i++){
	    printf(" nhap phan tu thu %d : ",i+1);
	    scanf("%d",&array[i]);
	}
    printf("nhap index ");
	scanf("%d",&index);
	printf(" nhap gia tri ");
	scanf("%d",&n);
	
	array[index]=n;
	for(int i=0;i<a;i++){
		printf(" %d ",array[i]);
	}

	return 0;
}
