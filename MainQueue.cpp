#include"Queue_implementation.cpp"
#include<iostream>
using namespace std;
int main()
{
	Queue<int> q;
	q.enQueue(1);
	q.enQueue(2);
	q.enQueue(3);
	q.enQueue(4);
	q.enQueue(5);
	q.enQueue(6);
	q.enQueue(7);
	q.enQueue(8);
	q.enQueue(9);
	q.enQueue(10);
	q.enQueue(11);

	int noe = q.getNumberOfElements();
	for (int i = 0; i < 8; i++)
		cout << q.deQueue() << " ";
	cout <<'\n' << q.deQueue() << " ";
	return 0;
}