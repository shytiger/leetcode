#include"head.h"
class MinStack {
public:
    /** initialize your data structure here. */
    struct ListNode{
        int val;
        int min;
        ListNode* next;
        ListNode(){};
        ListNode(int x){val = x;next=NULL;}
    };

    ListNode* head = new ListNode();
    ListNode* stackTop = head;
    int min_num = 0xffffffff;

    MinStack() {

    }

    void push(int x) {
        ListNode* newNode = new ListNode(x);
        newNode->next = stackTop;
        stackTop = newNode;
        if(x<min_num) min_num = x;
        newNode->min = min_num;
    }

    void pop() {
        if(stackTop==head) return;
        //ListNode* tmp = stackTop;
        //if(stackTop->val == min) min = ;
        stackTop = stackTop->next;
        //free(tmp);
    }

    int top() {
        if(stackTop==head) return -1;//
        return stackTop->val;
    }

    int min() {
        return stackTop->min;
    }
};


void test_stack()
{
	cout<<"test_stack()"<<endl;
	MinStack* obj = new MinStack();
	int x = 9;
	obj->push(4);
	obj->push(6);
	obj->push(8);
	obj->push(7);
	obj->pop();
	int param_3 = obj->top();
	int param_4 = obj->min();
	cout<<param_3<<" "<<param_4<<endl;
	cout<<0xffffffff<<endl;
}
