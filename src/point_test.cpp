#include"head.h"

void test_ptr()
{
	int a = 10,b=2;
	//ָ������ָ��
		//����*��ָ��ָ���ڴ��������޸ģ�ָ��ָ����Ա�
		const int *p1 = &a; //�ȼ���int const *p1 = &a;
		//*p1 = 111; //err
		p1 = &b; //ok

	//ָ�볣��
		//����p1��ָ��ָ���ܱ䣬ָ��ָ����ڴ�����޸�
		int * const p2 = &a;
		//p2 = &b; //err
		*p2 = 222; //ok

//		const (int*) p3 = &b;
//		p3 = &a;

//
//	int a[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//	int *p2 = &a[2]; //��2��Ԫ�ص�ַ
//	int *p1 = &a[1]; //��1��Ԫ�ص�ַ
//	printf("p1 = %p, p2 = %p\n", p1, p2);
//
//	int n1 = p2 - p1; //n1 = 1
//	int n2 = (int)p2 - (int)p1; //n2 = 4
//	printf("n1 = %d, n2 = %d\n", n1, n2);


}
