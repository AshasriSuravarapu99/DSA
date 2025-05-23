#include<bits/stdc++.h>
using namespace std;
class Node
{
public:
	int data;
	Node* next;
public:
	// Node(int data1,Node* next1)
	// {
	//      data = data1;
	//      next = next1;
	// }

	Node(int data1)
	{
	     data = data1;
	     next = nullptr;
	}
};

// Creation method
Node* convertArrToList(vector<int> &a)
{
    Node* head = new Node(a[0]);
    Node* mover = head;
    for(int i=1;i<a.size();i++)
    {
    	Node* temp = new Node(a[i]);
    	mover->next = temp;
    	mover=temp;
    }
    return head;
}
int main()
{
	vector<int>a = {5,2,3,4,5};
	Node* head = convertArrToList(a);
// 	cout<<head->data;

   // Traversing the Linked List
    Node* temp = head;
    int length = 0;
    while(temp)
    {
        cout<<temp->data<<" ";

	// Counting the no of nodes
        length++;
        temp = temp->next;
    }
    cout<<"\nLength "<<length;
    return 0;
}
