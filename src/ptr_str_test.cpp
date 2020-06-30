#include"head.h"

void ptr_str()
{
//	char str[] = "hello world";
//	char *p = str;
//	*p = 'm';
//	p++;
//	*p = 'i';
//	printf("%s\n", str);
//
//	p = "mike jiang";
//	printf("%s\n", p);
//
//	char *q = "test";
//	printf("%s\n", q);

	//指针数组，它是数组，每个元素都是指针
		char *a[] = { "aaaaaaa", "bbbbbbbbbb", "ccccccc" };
		int i = 0;

		//printf("argc = %d\n", argc);
		for (i = 0; i < 3; i++)
		{
			printf("%s\n", a[i]);
		}
		char* b = "abc";
		char c[] = "abc12d";
		printf("b: %s\n",b);
		printf("c: %s\n",c);
		printf("sizeof b: %d\n",sizeof(b));
		printf("strlen b: %d",strlen(b));
		printf("c: %d\n",sizeof(c));
		printf("*b: %d\n",sizeof(*b));
		printf("a: %d\n",sizeof(a));
		printf("*a: %d\n",sizeof(a));
		printf("a[0] %d\n",sizeof(a[0]));
		printf("*a[0] %d\n",sizeof(*a[0]));
		printf("a[1] %d\n",sizeof(a[1]));
		printf("*a[1] %d\n",sizeof(*a[1]));
		printf("a[2] %d\n",sizeof(a[2]));


//	char *p = "dsfabcksdfabccksdabcksjdfabca";
//	int n=0;
//	while((p=strstr(p,"abc"))!=NULL)
//	{
//		p = p + strlen("abc");
//		n++;
//		if(*p==0)
//		{
//			break;
//		}
//	}
//	printf("n: %d",n);

}
