#include<iostream> 
#include<math.h>
#include<cstdio>
using namespace std;
class circle{
	private:
		float R;
	public:
		void nhap();
		float CV();
		float S();
};
void circle::nhap(){
	cout<<"nhap vao ban kinh R : ";
	cin>>R;
}
float circle::CV(){
	float  chuvi;
	chuvi = 2 * M_PI * R ;
	return chuvi;
}
float circle::S(){
	float DienTich;
	DienTich = M_PI * R * R;
	return DienTich;
}
main(){
	circle b1;
	b1.nhap();
	cout<<"chu vi hinh tron : "<<b1.CV()<<endl;
	cout<<"dien tich  hinh tron : "<<b1.S();
}
