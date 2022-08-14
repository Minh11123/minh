#include<iostream> 
#include<math.h>
#include<cstdio>
using namespace std;
class canbo{
	private:
		char macb[10];
		char hoten[30];
		int ngaysinh, songaylamviec,luong;
	public:
		void input();
		int tinhluong();
		void output();
};
void canbo::input(){
	cout<<"nhap vao ma can bo: ";gets(macb);
	fflush(stdin) ;
	cout<<"nhap ho ten cb:";gets(hoten);
	cout<<"nhap vao ngay sinh: ";cin>>ngaysinh;
	cout<<"nhap vao so ngay lam viec: ";cin>>songaylamviec;
}
int canbo::tinhluong(){
	luong = songaylamviec * 250000;
	return luong;
}
void canbo::output(){
	cout<<"can bo co ma: "<<macb<<endl;
	cout<<"ho ten cb : "<<hoten<<endl;
	cout<<"ngay sinh : "<<ngaysinh<<endl;
	cout<<"luong : "<<tinhluong();
}
main(){
	canbo b6;
	b6.input();
	b6.output();
}
