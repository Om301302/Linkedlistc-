#include <iostream>
using namespace std;

struct Node{
	int val;
	Node* next;
};

class LinkedList{
	public:
		LinkedList();
		~LinkedList();
		void append(int i);
		void prepend(int i);
		int pop_front();
		int pop_back();
		void print_list();
		Node* find(int i);
		void remove(int i);
		
	private: 
		Node* head;


};


