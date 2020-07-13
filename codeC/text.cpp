#include<stdio.h>
#include<iostream>
#include<stdlib.h>
#include<conio.h>

using namespace std;

struct Sinhvien{
	int msv;
	char hoten[20];
	char gioitinh[20];
	float diem1,diem2,diem3;
	float dtb=(diem1+diem2+diem3)/3;
};

struct DanhSach{
	Sinhvien sv[20];
	int n;
};

void NhapDL(DanhSach &d){
	for(int i=0;i<d.n;i++){
		cout<<"Nhap ma sinh vien: ";cin>>d.sv[i].msv;
		cout<<"Nhap ho ten: ";fflush(stdin);gets(d.sv[i].hoten);
		cout<<"Nhap gioi tinh: ";cin>>d.sv[i].gioitinh;
		cout<<"Nhap diem1, diem2, diem3: ";cin>>d.sv[i].diem1>>d.sv[i].diem2>>d.sv[i].diem3;
		d.sv[i].dtb=(d.sv[i].diem1+d.sv[i].diem2+d.sv[i].diem3)/3;
	}
}

void HienDL(DanhSach d){
	for(int i=0;i<d.n;i++){
		cout<<endl<<"Sinhvien"<<i<<": ";
		cout<<endl<<"Ma sinh vien la: "<<d.sv[i].msv;
		cout<<endl<<"Ho ten la: "<<d.sv[i].hoten;
		cout<<endl<<"Gioi tinh la: "<<d.sv[i].gioitinh;
		cout<<endl<<"Diem1, diem2, diem3: "<<d.sv[i].diem1<<"   "<<d.sv[i].diem2<<"   "<<d.sv[i].diem3;
		cout<<endl<<"Diem trung binh: "<<d.sv[i].dtb;
	}
}

void Xoa1sv(DanhSach &d){
	int x,b;
	cout<<"Nhap ma sinh vien xoa: ";cin>>x;
	for(int i=0;i<d.n;i++){
		if(d.sv[i].msv==x){
			b=i;
		}
	}
	for(int i=0;i<d.n;i++){
		if(i>=b){
			d.sv[i]=d.sv[i+1];
		}
	}
	d.n--;
}

void sapxepdtb(DanhSach &d){
	for(int i=0;i<d.n;i++){
		for(int j=0;j<d.n;j++){
			if(d.sv[i].dtb<d.sv[j].dtb){
				Sinhvien t=d.sv[i];
				d.sv[i]=d.sv[j];
				d.sv[j]=t;
			}
		}
	}
}

void dtb(DanhSach &d){
	for(int i=0;i<d.n;i++){
		if(d.sv[i].dtb>=5){
			cout<<endl<<"Sinhvien"<<i<<": ";
			cout<<endl<<"Ma sinh vien la: "<<d.sv[i].msv;
			cout<<endl<<"Ho ten la: "<<d.sv[i].hoten;
			cout<<endl<<"Gioi tinh la: "<<d.sv[i].gioitinh;
			cout<<endl<<"Diem1, diem2, diem3: "<<d.sv[i].diem1<<"   "<<d.sv[i].diem2<<"   "<<d.sv[i].diem3;
			cout<<endl<<"Diem trung binh: "<<d.sv[i].dtb;
		}
	}
}

void demnam(DanhSach &d){
	int s=0;
	for(int i=0;i<d.n;i++){
		if(d.sv[i].gioitinh[0]=='n' && d.sv[i].gioitinh[1]=='a' && d.sv[i].gioitinh[2]=='m'){
			s++;
		}
	}
	cout<<"so sinh vien nam la: "<<s;
}

void dtbmsv(DanhSach &d){
	int x;
	cout<<"Nhap ma sinh vien: ";cin>>x;
	for(int i=0;i<d.n;i++){
		if(d.sv[i].msv==x){
			cout<<"Diem trung binh la: "<<d.sv[i].dtb;
		}
	}
}

int main(){
	Sinhvien sv;
	DanhSach d;;
	cout<<"Nhap so sinh vien: ";cin>>d.n;
	NhapDL(d);
	//Xoa1sv(d);
	//sapxepdtb(d);
	//dtb(d);
	//demnam(d);
	dtbmsv(d);
	//HienDL(d);
}
