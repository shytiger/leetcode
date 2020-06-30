#include"head.h"

void test_ptr()
{
	int a = 10,b=2;
	//指向常量的指针
		//修饰*，指针指向内存区域不能修改，指针指向可以变
		const int *p1 = &a; //等价于int const *p1 = &a;
		//*p1 = 111; //err
		p1 = &b; //ok

	//指针常量
		//修饰p1，指针指向不能变，指针指向的内存可以修改
		int * const p2 = &a;
		//p2 = &b; //err
		*p2 = 222; //ok

//		const (int*) p3 = &b;
//		p3 = &a;

//
//	int a[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//	int *p2 = &a[2]; //第2个元素地址
//	int *p1 = &a[1]; //第1个元素地址
//	printf("p1 = %p, p2 = %p\n", p1, p2);
//
//	int n1 = p2 - p1; //n1 = 1
//	int n2 = (int)p2 - (int)p1; //n2 = 4
//	printf("n1 = %d, n2 = %d\n", n1, n2);


}
