#include"head.h"
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;

    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
Node* copyRandomList(Node* head) {
        if(!head) return NULL;
        Node *ans = new Node(head->val);
        //ans->next = head->next;
        if(!head->next)
        {
            ans->random = head->random;
            return ans;
        }
        Node *cur1 = head;
        Node *cur2 = NULL;
        Node *pre = ans;
        map<Node*,Node*> Nodemap;
        Nodemap.insert(make_pair(head,ans));
        //map<long long int,Node*> Nodemap;
        while(cur1->next)
        {
             cur1 = cur1->next;
             cur2 = new Node(cur1->val);
             pre->next = cur2;
             pre = cur2;
             Nodemap.insert(make_pair(cur1,cur2));
        }
        cur1 = head;
        cur2 = ans;
        while(cur1)
        {
            //Node *tmp = cur1->random;
            auto it = Nodemap.find(cur1->random);
            if(it==Nodemap.end())
            {
                cur2->random = NULL;
            }
            else
            {
                cur2->random = (Node *)it->second;
                cout<<"random"<<endl;
            }
            cur1 = cur1->next;
            cur2 = cur2->next;
        }
        return ans;
 }

void test_Node()
{
	cout<<"test_Node()"<<endl;
	Node *head = new Node(1);
	Node *l2 = new Node(2);
	Node *l3 = new Node(3);
	head->next = l2;
	l2->next = l3;
	l2->random = head;
	head->random = l3;
	l3->random = l2;
	Node *ans = copyRandomList(head);
	while(ans)
	{
		cout<<ans->val<<" ";
		if(ans->random)
		{
			cout<<ans->random->val;
		}
		cout<<endl;
		ans = ans->next;
	}

}
