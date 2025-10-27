#include <iostream>

using namespace std;
int tong(int a, int b);
int hieu(int a, int b);
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
int main()
{
	cout << "DAY LA CHUONG TRINH DE THUC HANH GIT";
	int a=2;
	int b=6;
	cout<<tich(a,b);
	cout<<thuont(a,b);
	system("pause");
	return 0;
}