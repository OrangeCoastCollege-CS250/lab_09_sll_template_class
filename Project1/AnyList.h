#ifndef ANYLIST_H
#define ANYLIST_H

#include<iostream>
#include <string>			
using namespace std;

template <typename T>
class Node
{
public:
	Node() : data(NULL), next(nullptr) {}
	Node(const T& theData, Node<T> *newNext) : data(theData), next(newNext){}
	Node<T>* getNext() const { return next; }
	T getData( ) const { return data; }
    void setData(const T& theData) { data = theData; }
	void setNext(Node<T> *newNext) { next = newNext; }
	~Node(){}
private:
    T data;		
    Node<T> *next;	//pointer that points to next node
};

template<typename T>
class AnyList
{	
	template<typename T>
	friend ostream& operator<<(ostream& out, const AnyList<T>& theList);

public:
	AnyList();	

	void insert(const T& elem);

	int getNumOfElem() const;

	void destroyList();

	~AnyList();

private:
	Node<T> *first;
	int count;		
};

#endif