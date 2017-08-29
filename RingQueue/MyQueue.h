#ifndef  MYQUEUE_H
#define MYQUEUE_H
//���ζ���c++ʵ��
#include "customer.h"
class MyQueue
{
public:
	MyQueue(int queueCapacity); //InitwQueue(&Q) ��������
	virtual ~MyQueue();                //DestroyQueue(&Q)���ٶ���
	void ClearQueue();                  //ClearQueue(&Q)��ն���
	bool QueueEmpty() const;      //QueueEmpty(Q)�пն���
	bool QueueFull() const;          //QueueEmpty(Q)��������
	int QueueLength() const;        //QueueLength(Q)���г���
	bool EnQueue(Customer element);    //EnQueue(&Q, element)��Ԫ������
	bool DeQueue(Customer &element); //DeQueue(&Q, &element)��Ԫ�س���
	void QueueTraverse();            //QueueTraverse(Q, visit() )��������
private:
	Customer *m_pQueue;                     //��������ָ��
	int m_iQueueLen;                  //����Ԫ�ظ���
	int m_iQueueCapacity;          //������������
	int m_iHead;                         //����ͷ
	int m_iTail;                           //����β
};
#endif // ! MYQUEUE_H


