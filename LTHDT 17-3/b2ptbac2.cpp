#include<iostream> 
#include<math.h>
#include<cstdio>
using namespace std;
class PTbacII{
	private:
		float a, b, c, x1, x2, delta;
	public:
		void nhap();
		void giai();
};
void PTbacII::nhap(){
	cout<<"nhap vao a: ";
	cin>>a;
	cout<<endl;
	cout<<"nhap vao b: ";
	cin>>b;
	cout<<endl;
	cout<<"nhap vao c: ";
	cin>>c;
}
void PTbacII::giai(){
	delta = b*b - (4*a*c);
	cout<<delta;
	if(delta == 0){
		cout<<"pt co nghiem kep!"<<endl;
		x1 = -b/(2*a);
		cout<<" x = "<<x1<<endl;
	}if(delta < 0){
		cout<<"pt vo nghiem!"<<endl;
	}else{
		cout<<"pt co 2 nghiem pb!"<<endl;
		x1 = (-b + sqrt(delta))/2*a;
		cout<<"x1 = " <<x1<<endl;
		x2 = (-b - sqrt(delta))/2*a;
		cout<<"x2 = " <<x2;
	}
}
main(){
	PTbacII b2;
	b2.nhap();
	b2.giai();
}
