# include<iostream>
using namespace std;
int add(int, int);// ���� add ����
int main() {
	int x, y, sum;
	cout << "Enter two numbers" << endl;
	cin >> x >> y;// �� cin ��� x �� y �Ķ���
	sum = add(x, y);
	cout << sum << endl; // �� cout �� x �� y ֮�����
	return 0;
}
int add(int a, int b)
{
	return a + b; // ��д������� a �� b ֮�ͣ�������
}
/*#include <iostream>
using namespace std; 
int main()
{
	int age;
	cout << "Please input your AGE�� " << endl;
	cin >> age;
	cout << "Hello, world!I am " << age << endl;
	return 0;
}*/