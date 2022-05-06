#include<iostream>
using namespace std;
#include<string>//c++风格的字符串输出，必须包含这个头文件（这次不包含为什么没有报错？）
int main()
{
	/*float f2 = 3e2;
	cout << "f2=" << f2 << endl;
	float f3 = 3e-2;
	cout << "f3=" << f3 << endl;*/
	//C语言风格的字符型、字符串
	/*char ch = 'a';
	cout << (int)ch << endl;
	cout << "char所占的字节大小为" << sizeof(ch) << endl;*/
	char str1[] = "hello world";
	cout << str1 << endl;
	//cout << "str1所占字节的大小：" << sizeof(str1) << endl;

	//c++风格的字符串创建
	string str2 = "nihaoya";
	cout << str2 <<endl;
	cout << "hello world\n";//“\n”换行符好像需要在字符后加？？？


	return 0;
}