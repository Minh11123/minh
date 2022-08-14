#include<iostream> 
#include<math.h>
#include<cstdio>
using namespace std;
class PTbacI{
	private:
		float a;
		float b;
		float x;
	public:
		void nhap();
		float giai();
};
void PTbacI::nhap(){
	cout<<"nhap vao a: ";
	cin>>a;
	cout<<endl;
	cout<<"nhap vao b: ";
	cin>>b;
}
float PTbacI::giai(){
	x = -b/a;
	return x;
}
main(){
	PTbacI b2;
	b2.nhap();
	cout<<"PT co nghiem : "<<b2.giai();
}
