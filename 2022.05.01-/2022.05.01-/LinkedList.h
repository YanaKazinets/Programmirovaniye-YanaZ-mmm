#pragma once
#include<ostream>

struct Node
{
	int data;
	Node* next;
	Node(int data = 0, Node* next = nullptr): data(data), next(next){}
	Node(const Node& node): data(node.data), next(nullptr){}
	~Node()
	{
		data = 0;
		next = nullptr;
	}
	friend std::ostream& operator<<(std::ostream& stream, const Node& node)
	{
		stream << node.data;
		return stream;
	}
};

class LinkedList
{
private:
	Node* head;
	Node* tail;
	int count;
public:
	LinkedList(Node* head = nullptr, Node* tail = nullptr, int count = 0): head(head), tail(tail), count(count){}
	LinkedList(const LinkedList& list): head(list.head), tail(list.tail), count(list.count){}
	~LinkedList()
	{
		while (head != nullptr)
		{
			popHead();
		}
	}

	void pushHead(int element);
	void pushTail(int element);
	void insert(int element, int index);
	void swap(int index1, int index2);

	int popHead();
	int popTail();
	int extract(int index);
	
	friend std::ostream& operator<<(std::ostream& stream, const LinkedList& list);
};

