#include<iostream>
using namespace std;

int main()

{
	int a[3];//����
	int x,y,z;
	y= -1;

	for (x = 1; x <= 3; x++)//�ݺ���

	{
		cout << x << "��° ���� �Է�>> ";

		cin >> a[x];

		cout << endl;

		if (a[x] >y)//���ǹ�

		{
			y = a[x];

		}

	}

	cout << "�ִ� : " << y;

}