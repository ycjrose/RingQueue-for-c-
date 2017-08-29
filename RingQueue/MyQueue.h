#ifndef  MYQUEUE_H
#define MYQUEUE_H
//环形队列c++实现
#include "customer.h"
class MyQueue
{
public:
	MyQueue(int queueCapacity); //InitwQueue(&Q) 创建队列
	virtual ~MyQueue();                //DestroyQueue(&Q)销毁队列
	void ClearQueue();                  //ClearQueue(&Q)清空队列
	bool QueueEmpty() const;      //QueueEmpty(Q)判空队列
	bool QueueFull() const;          //QueueEmpty(Q)判满队列
	int QueueLength() const;        //QueueLength(Q)队列长度
	bool EnQueue(Customer element);    //EnQueue(&Q, element)新元素入列
	bool DeQueue(Customer &element); //DeQueue(&Q, &element)首元素出列
	void QueueTraverse();            //QueueTraverse(Q, visit() )便历队列
private:
	Customer *m_pQueue;                     //队列数组指针
	int m_iQueueLen;                  //队列元素个数
	int m_iQueueCapacity;          //队列数组容量
	int m_iHead;                         //队列头
	int m_iTail;                           //队列尾
};
#endif // ! MYQUEUE_H


