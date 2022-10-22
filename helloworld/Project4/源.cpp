# include<iostream>
using namespace std;
int add(int, int);// 声明 add 函数
int main() {
	int x, y, sum;
	cout << "Enter two numbers" << endl;
	cin >> x >> y;// 用 cin 完成 x 和 y 的读入
	sum = add(x, y);
	cout << sum << endl; // 用 cout 将 x 和 y 之和输出
	return 0;
}
int add(int a, int b)
{
	return a + b; // 编写程序完成 a 和 b 之和，并返回
}
/*#include <iostream>
using namespace std; 
int main()
{
	int age;
	cout << "Please input your AGE： " << endl;
	cin >> age;
	cout << "Hello, world!I am " << age << endl;
	return 0;
}*/