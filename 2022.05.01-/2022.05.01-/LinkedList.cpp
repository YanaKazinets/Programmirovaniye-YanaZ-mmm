#include "LinkedList.h"


void LinkedList::pushHead(int element)
{
	head = new Node(element, head);
	if (tail == nullptr)
	{
		tail = head;
	}
	++count;
}

void LinkedList::pushTail(int element)
{
	if (tail == nullptr)
	{
		return pushHead(element);
	}
	tail->next = new Node(element, nullptr);
	tail = tail->next;
	++count;
}

void LinkedList::insert(int element, int index)
{
	Node* temp = head;
	for (int i = 0; i < index - 2; ++i)
	{
		temp = temp->next;
	}
	Node* over = temp->next;
	temp->next = new Node(element, over);
	++count;
}

void LinkedList::swap(int index1, int index2)
{
	Node* temp1 = head;
	for (int i = 0; i < index1 - 2; ++i)
	{
		temp1 = temp1->next;
	}
	Node* temp2 = head;
	for (int i = 0; i < index2 - 2; ++i)
	{
		temp2 = temp2->next;
	}
	Node* elem1 = temp1->next;
	Node* elem2 = temp2->next;
	Node* over1 = elem1->next;
	Node* over2 = elem2->next;

	temp1->next = elem2;
	temp1->next->next = over1;
	temp2->next = elem1;
	temp2->next->next = over2;
}

int LinkedList::popHead()
{
	if (head == nullptr)
	{
		return 0;
	}
	--count;
	Node* temp = head;
	int value = head->data;
	head = head->next;
	delete temp;
	if (head == nullptr)
	{
		tail = nullptr;
	}
	return value;
}

int LinkedList::popTail()
{
	if (tail == nullptr)
	{
		return 0;
	}
	if (head == tail)
	{
		return popHead();
	}
	Node* temp = head;
	while (temp->next != tail)
	{
		temp = temp->next;
	}
	--count;
	int value = tail->data;
	delete tail;
	tail = temp;
	tail->next = nullptr;
	return value;
}

int LinkedList::extract(int index)
{
	if (tail == nullptr)
	{
		return 0;
	}
	if (head == tail)
	{
		return popHead();
	}
	Node* temp = head;
	for (int i = 0; i < index - 2; ++i)
	{
		temp = temp->next;
	}
	--count;
	int value = temp->next->data;
	Node* over = temp->next->next;
	delete temp->next;
	temp->next = over;
	return value;
}

std::ostream& operator<<(std::ostream& stream, const LinkedList& list)
{
	stream << "[" << list.count << "] : { ";
	Node* temp = list.head;
	while (temp != nullptr)
	{
		stream << temp->data << " ";
		temp = temp->next;
	}
	stream << "}";
	return stream;
}
