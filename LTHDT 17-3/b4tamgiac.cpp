#include<iostream> 
#include<math.h>
#include<cstdio>
using namespace std;
class triangle{
	private:
		int a,b,c;
		float p;
	public:
		void nhap();
		float chuvi(int a, int b, int c) {
        return a + b + c;
        }
		float dientich(int a, int b, int c) {
        float p = chuvi(a, b, c) / 2.0;
        return sqrt(p*(p - a)*(p - b)*(p - c));
        } 
	    void tinh();
};
void triangle::nhap(){
	cout<<"nhap vao cac canh tam giac : ";
	cout<<"a =  ";
	cin>>a;
	cout<<"b =  ";
	cin>>b;
	cout<<"c =  ";
	cin>>c;
}
void triangle::tinh(){
    if (a >= b + c || b >= a + c || c >= a + b)
        cout << "Ba canh vua nhap khong phai la canh cua tam giac";
    else {
        cout << "Chu vi cua tam giac la: "<<chuvi(a,b,c)<<endl;
        cout << "Dien tich cua tam giac la: " << dientich(a, b, c)<<endl;
    }
}
main(){
	triangle b1;
	b1.nhap();
    b1.tinh();
}
