#include"1.h"




//函数重载注意事项


//1、引用作为重载条件
void func(int &a)   //int &a = 10 ; 不合法
{
	cout << "func(int &a)调用" << endl;
}

void func(const int& a)   //const int &a = 10; 合法
{
	cout << "func(const int &a)调用" << endl;
}


//2、函数重载碰到函数默认参数
void func2(int a, int b=10)
{
	cout << "func2(int a,int b)的调用" << endl;
}

void func2(int a) 
{
	cout << "func2(int a)的调用" << endl;
}


int main() 
{
	int a = 10;
	func(a);   //调用无const

	func(10);   //调用有const

	//func2(10);   //当函数重载遇到默认参数时，出现二义性，报错，尽量避免

	system("pause");
	return 0;
}