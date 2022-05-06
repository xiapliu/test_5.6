#include<iostream>
using namespace std;
#include<string>//c++风格的字符串输出，必须包含这个头文件（这次不包含为什么没有报错？）
int main()
{
	//1、创建bool数据类型

	bool flag = true;
	cout << flag << endl;
	flag = false;
	cout << flag << endl;
	//2、查看bool类型所占的空间
	cout << "bool类型所占的字节空间大小：" << sizeof(bool) << endl;

	return 0;
}