#include "AnyList.h"

template <typename T>
ostream& operator<<(ostream& out, const AnyList<T>& theList)
{
	if (theList.first == nullptr)
		out << "List is empty." << endl;
	else
	{
		Node<T> *temp = theList.first;

		while (temp != nullptr)
		{
			out << temp->getData() << " ";
			temp = temp->getNext();
		}
	}

	return out;
}

template <typename T>
AnyList<T>::AnyList()
{
	first = nullptr;
	count = 0;
}

template <typename T>
void AnyList<T>::insert(const T& elem)
{	
	Node<T> *newNode = new Node<T>(elem, nullptr);

	if (first == nullptr)
		first = newNode;
	else
	{
		Node<T> *temp = first;
		while (temp->getNext() != nullptr)
			temp = temp->getNext();
		temp->setNext(newNode);
	}

	++count;
}

template <typename T>
int AnyList<T>::getNumOfElem() const
{
	return count;
}

template <typename T>
void AnyList<T>::destroyList()
{ 
	Node<T>  *temp = first;
	
	while (temp != nullptr)
    {
		first = first->getNext();
        delete temp;
		temp = first;
    }

	count = 0;
}

template <typename T>
AnyList<T>::~AnyList()
{
	destroyList();
}



