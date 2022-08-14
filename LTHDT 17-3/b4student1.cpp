#include<iostream> 
#include<math.h>
#include <string>
#include<cstdio>
using namespace std;
class student{
	private:
		char hoten[30];
		string gt;
		int ngaysinh,thangsinh,namsinh;
		bool gioitinh(string gt){ 
        if (gt == "nam")
        return true;
        if (gt == "nu")
        return false;
        }
		float dtb;
		char daoduc[30];
	public:
		void input();
		void output();
};
void student::input(){
	cout<<"nhap vao ten hs :";gets(hoten);
	do{
		cout<<"nhap ngay sinh:";
		cin>>ngaysinh;
	}while(ngaysinh<0 || ngaysinh >31 );
	do{
		cout<<"nhap thang sinh:";
		cin>>thangsinh;
	}while(thangsinh<0 || thangsinh >12 );
	do{
		cout<<"nhap nam sinh:";
		cin>>namsinh;
	}while(namsinh<2000 || namsinh >2010 );
	cout<<endl;
	cout<<"gioi tinh: ";
	cin>>gt;
	do{
		cout<<"nhap diem tb:";
		cin>>dtb;
	}while(dtb < 0 || dtb >10);
	fflush(stdin) ;
	cout<<endl;
	cout<<"xep loai dao duc: ";gets(daoduc);
}
void student::output(){
	cout<<"ho ten: "<<hoten<<endl;
	cout<<"ngay thang nam sinh: "<<ngaysinh<<"-"<<thangsinh<<"-"<<namsinh<<endl;
	cout<<"gioi tinh: "<<gioitinh(gt)<<endl;
	cout<<"dtb = "<<dtb<<endl;
	cout<<"xep loai dao duc: "<<daoduc;
}
main(){
	student b4;
	b4.input();
	b4.output();
}
