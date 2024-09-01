#include<iostream>
#include<iomanip>
#include<math.h>
using namespace std;
int main(){
//	int a,b;
//	cin>>a>>b;
//	int tong = a + b;
//	int hieu = a - b;
//	long long tich = (long long)a * b;
//	float thuong = (float) a / b;
//	cout<<tong<<" "<<hieu<<" "<<tich<<" "<<fixed<<setprecision(4)<<thuong<<endl;


//	int r;
//	cin>>r;
//	float pi = 3.14;
//	float cv = 2*pi*r;
//	float dt = pi*r*r;
//	cout<<cv<<" "<<dt<<endl;

//	float x1, x2, y1, y2;
//	cout<<"Nhap x1, y1, x2, y2: "<<endl;
//	cin>>x1>>y1;
//	cin>>x2>>y2;
//	float kq = sqrt(pow(x1-x2,2)+pow(y1-y2, 2));
//	cout<<kq<<endl;


	//CT 1 + 2 + 3 +... + n = (n*(n+1))/2
//	int long long n;
//	cin>>n;
//	long long s;
//	s = n*(n+1)/2;
//	cout<<s;
	
	//CT 1^2+2^3+...n^2 = (n*(n+1)*(2*n+1))/6
//	long long n;
//	cin>>n;
//	long long kq = n*(n+1)*(2*n+1)/6;
//	cout<<kq<<endl;
	//CT 1/2*1 + 1/2*3 + 1/3*4+...+1/n*(n+1) = 1-1/(n+1)
//CT 2 + 4 + 6 + 8 +...+2n  -> n*(n+1)
//	int a, b;
//	cin>>a>>b;
//	int c = (a/b)*b;
//	cout<<c<<endl;

	int a,b;
	cin>>a>>b;
	int c = ((a+b-1)/b)*b;
	cout<<c;
	
	
}
