#include <stdio.h>

int main(){
	int chose,arr[100],array=0,a,n,sl,index;
	do{
	printf("\nMENU\n 1.Nhap vao mang\n 2.Hien thi mang\n 3.Them phan tu\n 4.Sua phan tu\n 5.Xoa phan tu\n 6.Thoat\n");
	scanf("%d",&chose);
	switch(chose){
		case 1:
			printf("nhap so luong phan tu : ");
			scanf("%d",&sl);
			for(int i=0;i<sl;i++){
				printf("nhap gia tri cho phan tu thu %d : ",i);
				scanf("%d",&arr[i]);
			}
			array++;
			break;
		case 2:
			if(array==0){
				printf("hay nhap mang truoc");
			}else{
				for(int i=0;i<sl;i++){
				printf("gia tri phan tu thu %d : %d\n",i,arr[i]);
			   }
		    }
			break;
		case 3:
			if(array==0){
				printf("hay nhap mang truoc");
			}else{
				printf("nhap index : ");
	            scanf("%d",&index);
	            for(int i=sl;i>index;i--){
		        arr[i]=arr[i-1];
	            }
	            printf("nhap so muon them : ");
	            scanf("%d",&a);
	            arr[index]=a;
                for(int i=0;i<sl+1;i++){
		        printf("%d\n",arr[i]);
             	}
			}
		    break;
		case 4:
			if(array==0){
				printf("hay nhap mang truoc");
			}else{
			 printf("nhap index ");
	         scanf("%d",&index);
	         printf(" nhap gia tri ");
	         scanf("%d",&n);
	         arr[index]=n;
	         for(int i=0;i<sl;i++){
		     printf(" %d ",arr[i]);
	         }
	        }
			break;
		case 5:
			if(array==0){
				printf("hay nhap mang truoc");
			}else{
				printf("nhap index : ");
	            scanf("%d",&index);
	            for(int i=index;i<sl;i++){
		        arr[i]=arr[i+1];
	            }
	            for(int i=0;i<sl-1;i++){
		        printf("%d\n",arr[i]);
	            }
			}
			break;
		case 6:
			printf("ket thuc chuong trinh");
			break;
		default:
		printf("khong thuoc menu");
	}
  }while(chose!=6);
  return 0;
}
