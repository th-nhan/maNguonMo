#include <iostream>

using namespace std;
int tong(int a, int b){
		return a+b;
	}
int hieu(int a, int b){
	return a-b;
}
int tich(int a, int b);
float thuong(int a, int b);
int main()
{
	cout << "DAY LA CHUONG TRINH DE THUC HANH GIT";
	int sum = tong(3,4);
	int minus = hieu(6,5);
	cout << sum;
	cout << minus;
	system("pause");
	return 0;
}