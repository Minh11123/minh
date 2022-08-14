#include<iostream> 
#include<math.h>
#include<cstdio>
using namespace std;
class date{
	private:
		int d,m,y;
	public:
		void nhap();
		void xuat();
};
void date::nhap(){
	cout<<"nhap ns:";
	cin>>d>>m>>y;
}
void date::xuat(){
	cout<<"ns: "<<d<<"/"<<m<<"/"<<y;
}
class NhanSu{
	private:
		int mans;
		char hoten[30];
		date ngaysinh;
	public:
		void nhap();
		void xuat();
};
void NhanSu::nhap(){
	cout<<"nhap ma nhan su: ";
	cin>>mans;
	cout<<"nhap ho ten: ";gets(hoten);
	ngaysinh.nhap();
}
void NhanSu::xuat(){
	cout<<"mans: "<<mans<<endl;
	cout<<"ho ten: "<<hoten<<endl;
    ngaysinh.xuat();
}
main(){
	date n1;
	NhanSu n2;
	n2.nhap();
	n2.xuat();
}
