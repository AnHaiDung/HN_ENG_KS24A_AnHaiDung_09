#include <stdio.h>

int main(){
	int chose,arr[100],array=0,sl,index,sum=0,max,min,number,tsnt,dem=0,a;
	int flag(int n){
	if (n<2){
		return 0;
	}
	for (int i=2;i<n;i++){
		if (n%i==0){
			return 0;
		}
	}
	
	return 1;
    }
	do{
	printf("\nMENU\n 1.Nhap vao mang\n 2.Hien thi mang\n 3.Phan tu chan\n 4.GTLN,GTNN\n 5.snt va tong snt\n 6.thong ke sophan tu co trong mang\n 7.them phan tu\n 8.thoat\n");
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
				for(int i=0;i<sl;i++){
					if(arr[i]%2==0){
						printf("phan tu chan la : %d\n",arr[i]);
						sum+=arr[i];
					}
				}
				printf("tong so chan : %d ",sum);
			}
		    break;
		case 4:
			if(array==0){
				printf("hay nhap mang truoc");
			}else{
				max=arr[0];
				min=arr[0];
				for(int i=0;i<sl;i++){
					if(arr[i]>max){
						max=arr[i];
					}
					if(arr[i]<min){
						min=arr[i];
					}
				}
				printf("GTLN : %d, GTNN : %d",max,min);
			}
			break;
		case 5:
			if(array==0){
				printf("hay nhap mang truoc");
			}else{
				for (int i=0;i<sl;i++){
				if (flag(arr[i]) == 1 ){
					printf("snt : %d \n",arr[i]);
					tsnt+=arr[i];
				}
			}
			printf("tong snt %d \n",tsnt);
			}
			break;
		case 6:
			if(array==0){
				printf("hay nhap mang truoc");
			}else{
				printf("nhap so bat ki : ");
				scanf("%d",&number);
				for(int i=0;i<sl;i++){
					if(number==arr[i]){
						dem++;
					}
				}
				printf("%d xuat hien %d lan",number,dem);
			}
			break;
		case 7:
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
		case 8:
			printf("ket thuc chuong trinh");
			break;
		default:
		printf("khong thuoc menu");
	}
  }while(chose!=8);
  return 0;
}
