#pragma once
#include <string>

using namespace std;

struct node
{
	string data;
	node *link;
};

class linkedListTry
{
private:
	node *head, *tail;
	int length = 0;
public:
	linkedListTry()
	{
		head = NULL;
		tail = NULL;
	}
	void insertAtStart(string data)
	{
		node* newNode = new node;
		newNode->data = data;
		newNode->link = NULL;

		if (head == NULL)
		{
			head = newNode;
			tail = newNode;
		}
		else
		{
			newNode->link = head;
			head = newNode;
		}
		length++;
	}
	void insertAtEnd(string data)
	{
		node* newNode = new node;
		newNode->data = data;
		newNode->link = NULL;
		tail->link = newNode;
		length++;
	}
	void insertAtMiddle(int index, string data)
	{
		if (index >= length)
		{
			cout << "Index out of range." << endl;
			return;
		}

		node* newNode = new node;
		newNode->data = data;

		node* ptr1 = head;
		for (int i = 0; i < index; i++)
		{
			ptr1 = ptr1->link;
		}

		node* ptr2 = head;
		for (int i = 0; i < index; i++)
		{
			if (i == index - 1)
			{
				ptr2->link = newNode;
			}
		}
		newNode->link = ptr1;



		length++;
	}
	node getHead()
	{
		return *head;
	}

	int getLength()
	{
		return this->length;
	}
};