#include <iostream>

using namespace std;
int tich(int a, int b)
{
	return a*b;
}
float thuong(int a, int b)
{
	if(b==0)
		return 0;
	else
		return a/(1.0)*b;
}
int tong(int a, int b){
		return a+b;
	}
int hieu(int a, int b){
	return a-b;
}
int main()
{
	cout << "DAY LA CHUONG TRINH DE THUC HANH GIT";
	int sum = tong(3,4);
	int minus = hieu(6,5);
	cout << sum;
	cout << minus;
	int a=2;
	int b=6;
	cout<<tich(a,b);
	cout<<thuont(a,b);
	system("pause");
	return 0;
}