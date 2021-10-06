#include<iostream>
using namespace std;

int main()

{
	int a[3];//베열
	int x,y,z;
	y= -1;

	for (x = 1; x <= 3; x++)//반복문

	{
		cout << x << "번째 숫자 입력>> ";

		cin >> a[x];

		cout << endl;

		if (a[x] >y)//조건문

		{
			y = a[x];

		}

	}

	cout << "최댓값 : " << y;

}