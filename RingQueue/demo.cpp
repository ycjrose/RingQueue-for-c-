#include <iostream>
#include <stdlib.h>
#include "MyQueue.h"
using namespace std;
//实现环形队列
int main(void) {
	MyQueue *p = new MyQueue(4);
	Customer c1("asan", 15);
	Customer c2("asi", 16);
	Customer c3("awu", 32);
	Customer c4("aliu", 47);
	p->EnQueue(c1);
	p->EnQueue(c2);
	p->EnQueue(c3);
	p->EnQueue(c4);
	p->QueueTraverse();
	Customer e("", 0);
	p->DeQueue(e);
	cout << "已处理一个" << endl;
	e.printInfo();
	p->QueueTraverse();
	delete p;
	p = NULL;
	//MyQueue *p = new MyQueue(4);
	//p->EnQueue(10);
	//p->EnQueue(32);
	//p->EnQueue(2);
	//p->EnQueue(244);
	////p->EnQueue(2244);
	//p->QueueTraverse();
	//int e = 0;
	//p->DeQueue(e);
	//p->DeQueue(e);

	//p->QueueTraverse();
	//p->EnQueue(100);
	//p->QueueTraverse();
	//delete p;
	//p = NULL;

	system("pause");
	return 0;
}
