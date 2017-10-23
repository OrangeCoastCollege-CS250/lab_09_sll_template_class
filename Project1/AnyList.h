#ifndef ANYLIST_H
#define ANYLIST_H

#include<iostream>
#include <string>			
using namespace std;

class Node
{
public:
	Node() : data(0), next(nullptr) {}
	Node(int theData, Node *newNext) : data(theData), next(newNext){}
	Node* getNext() const { return next; }
	int getData( ) const { return data; }
    void setData(int theData) { data = theData; }
	void setNext(Node *newNext) { next = newNext; }
	~Node(){}
private:
    int data;		
    Node *next;	//pointer that points to next node
};


class AnyList
{	
	friend ostream& operator<<(ostream& out, const AnyList& theList);

public:
	AnyList();	

	void insert(int elem);

	int getNumOfElem() const;

	void destroyList();

	~AnyList();

private:
	Node *first;
	int count;		
};

#endif