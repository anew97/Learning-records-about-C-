//函数分文件编写一般有4个步骤

//1、创建后缀名为.h的头文件
//2、创建后缀名为.cpp的源文件
//3、在头文件中写函数的声明
//4、在源文件中写函数的定义

//main函数文件
#include "4、swap.h"
int main() {

	int a = 100;
	int b = 200;
	swap(a, b);

	system("pause");

	return 0;
}
