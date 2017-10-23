#include "AnyList.h"


ostream& operator<<(ostream& out, const AnyList& theList)
{
	if (theList.first == nullptr)
		out << "List is empty." << endl;
	else
	{
		Node *temp = theList.first;

		while (temp != nullptr)
		{
			out << temp->getData() << " ";
			temp = temp->getNext();
		}
	}

	return out;
}

AnyList::AnyList()
{
	first = nullptr;
	count = 0;
}

void AnyList::insert(int elem)
{	
	Node *newNode = new Node(elem, nullptr);

	if (first == nullptr)
		first = newNode;
	else
	{
		Node *temp = first;
		while (temp->getNext() != nullptr)
			temp = temp->getNext();
		temp->setNext(newNode);
	}

	++count;
}

int AnyList::getNumOfElem() const
{
	return count;
}

void AnyList::destroyList()
{ 
	Node  *temp = first;
	
	while (temp != nullptr)
    {
		first = first->getNext();
        delete temp;
		temp = first;
    }

	count = 0;
}

AnyList::~AnyList()
{
	destroyList();
}



