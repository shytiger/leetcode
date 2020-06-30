

#include"head.h"
//#include<stdio.h>
//#include<iostream>
//using namespace std;

//extern struct ListNode;


//Definition for singly-linked list.
struct ListNode {
  int val;
  ListNode *next;
  ListNode(int x) : val(x), next(NULL) {}
};
//extern ListNode* reverList();
//extern int test_ListNode();
ListNode* reverseList(ListNode* head) {
	if(!head||!head->next) return head;
	ListNode *p1 = head;
	ListNode *p2 = head->next;
	while(head)
	{
		p2 = head->next;
		head->next = p1;
		p1 = head;
		head = p2;
	}
	return p1;
}

template<typename T,int N>
ListNode* list_init(T (&a)[N])
{
	ListNode* head = new ListNode(a[0]);
	//head->val = a[0];
	ListNode* pre = head;
	int size1 = sizeof(a)/sizeof(a[0]);
	if(size1==1)
	{
		return head;
	}
	for(int i=1;i<size1;i++)
	{
		ListNode* cur = new ListNode(a[i]);
		pre->next = cur;
		pre = cur;
	}
	return head;
}
void list_print(ListNode* head)
{
	if(!head)
	{
		cout<<"NULL list"<<endl;
		return;
	}
	while(head)
	{
		cout<<head->val<<" ";
		head = head->next;
	}
	cout<<endl;
	return;
}
int b[10];
int test_ListNode()
{
	//int a[]={1,2,4};
	int a[10];
//	int (*k)[10];
//	int t =120;
//	(*k)[0] = 10;
	cout<<"test_listNode"<<endl;
	ListNode* alist = list_init(b);
	list_print(alist);
//	ListNode *l1 = new ListNode(1);
//	ListNode *l2 = new ListNode(2);
//	ListNode *l3 = new ListNode(3);
//	l1->next = l2;
//	l2->next = l3;
//	ListNode *ans;
//	ans = reverseList(l1);
//	cout<<ans->val;

}
