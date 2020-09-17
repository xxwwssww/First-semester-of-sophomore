#include<iostream>
using namespace std;

template <typename T>
class Node
{
public:
	Node(T x);
	~Node();
	T GetData();
	void SetData(T x);
private:
	T data;
	Node *next;
};

template <typename T>
Node<T>::Node(T x)
{
	data=x;
	next=0;
}

template <typename T>
Node<T>::~Node()
{

}

template <typename T>
T Node<T>::GetData()
{
	return data;
}

template <typename T>
void Node<T>::SetData(T x)
{
	data=x;
}

int main()
{
	Node<double> s(3.14);
	Node<int> t(5);
	cout<<s.GetData()<<endl;
	t.SetData(10);
	cout<<t.GetData()<<endl;
	return 0;
}
