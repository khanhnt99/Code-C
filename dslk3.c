#include<stdio.h>

typedef struct SinhVien{
	int masv;
	char hoten[8];
	char sex[8];
	int dtb;
}SinhVien;

typedef struct List{
	SinhVien DSSV[100];
	int TongSoSV;
}List;

void HienList(List &l);

void NhapList(List &l){
	do{
		printf("Nhap so sinh vien:");
		scanf("%d",&l.TongSoSV);
	}while(l.TongSoSV<0);
	for(int i=0;i<l.TongSoSV;i++){
		printf("\n============================\n");
		printf("\nNhap ma so: "); scanf("%d",&l.DSSV[i].masv);
		
		printf("\nNhap ho ten: "); getchar();
		fgets(l.DSSV[i].hoten,sizeof l.DSSV[i].hoten, stdin);
		
		printf("\nNhap gioi tinh: ");
		fgets(l.DSSV[i].sex,sizeof l.DSSV[i].sex, stdin);

		printf("\nNhap diem tb: "); scanf("%d",&l.DSSV[i].dtb);
	}
}

void HienList(List &l){
	int i;
	for(i=0;i<l.TongSoSV;i++){
		printf("\n%d\t%s\t%s\t%d",l.DSSV[i].masv,l.DSSV[i].hoten,l.DSSV[i].sex,l.DSSV[i].dtb);
	}	
}

void Xoavitrik(List &l){
	int k;
	printf("\n===============================");
	printf("\nNhap vi tri can xoa: ");scanf("%d",&k);
	for(int i=k;i<l.TongSoSV-1;i++){
		l.DSSV[i]=l.DSSV[i+1];
	}
	l.TongSoSV--;
}

void sapxepdiemtb(List &l){
	for(int i=0;i<l.TongSoSV-1;i++){
		for(int j=l.TongSoSV;j>i;j--){
		if(l.DSSV[i].dtb<l.DSSV[i-1].dtb)
			{
				SinhVien temp=l.DSSV[i];
				l.DSSV[i]=l.DSSV[i-1];
				l.DSSV[i-1]=temp;
			}
		}
	}
}

int main(){
	List l;
	NhapList(l);
	HienList(l);
	printf("\nDanh sach sau khi sap xep theo diem trung binh");
	sapxepdiemtb(l);
	printf("\n==================================");
	HienList(l);
	printf("\n");
	
}
