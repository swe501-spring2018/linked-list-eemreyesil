#include <iostream>
#include <cstdlib>
using namespace std;
struct Node {
	int data;
	Node* next;
	Node(int d, Node* n = nullptr) {
		data = d;
		next = n;
	}
};
struct list
  {
    Node *head, *tail;
    list()
    {
      head=nullptr;
      tail=nullptr;
    }
    void createnode(int value)
    {
      Node *temp=new Node(value,nullptr);
      if(head==nullptr)
      {
        head=temp;
        tail=temp;
        temp=nullptr;
      }
      else
      {
        tail->next=temp;
        tail=temp;
      }
    }
    void operator*=(int b){
		for (Node* p=head; p != nullptr; p = p->next )
			p->data = p->data*b;
	}
  };
  ostream& operator<<(ostream& os, list& l){
	for (Node* p=l.head; p != nullptr; p = p->next ){
		os << p->data << " ";
	}
	return os;}
int main() {
	int N = 10;
	int d;
list lst;


	for (int i=0; i<N; i++) {
		d = rand()%30;
		lst.createnode(d);
		cout << lst << " times 5 = ";
		lst*=5;
		cout << lst << endl;
	}



	return 0;
}
