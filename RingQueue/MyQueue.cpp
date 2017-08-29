#include <iostream>
#include <stdlib.h>
#include "MyQueue.h"
using namespace std;
MyQueue::MyQueue(int queueCapacity) {
	m_iQueueCapacity = queueCapacity;
	ClearQueue();
	m_pQueue = new Customer[m_iQueueCapacity];
}
MyQueue::~MyQueue() {
	delete []m_pQueue;
	m_pQueue = NULL;
} 
void MyQueue::ClearQueue() {
	m_iHead = 0;
	m_iTail = 0;
	m_iQueueLen = 0;
}
bool MyQueue::QueueEmpty() const {
	return m_iQueueLen == 0;
}
int MyQueue::QueueLength() const {
	return m_iQueueLen;
}
bool MyQueue::QueueFull() const {
	return m_iQueueCapacity == m_iQueueLen;
}
bool MyQueue::EnQueue(Customer element) {
	if (QueueFull()) {
		return false;
	}
	m_pQueue[m_iTail] = element;
	m_iTail++;
	m_iTail = m_iTail % m_iQueueCapacity;
	m_iQueueLen++;
	return true;
}
bool MyQueue::DeQueue(Customer &element) {
	if (QueueEmpty()) {
		return false;
	}
	element = m_pQueue[m_iHead];
	m_iHead++;
	m_iHead = m_iHead % m_iQueueCapacity;
	m_iQueueLen--;
	return true;
}
void MyQueue::QueueTraverse() {
	
	for (int i = m_iHead; i < m_iHead + m_iQueueLen; i++) {
		m_pQueue[i%m_iQueueCapacity].printInfo();
		cout << "前面还有" << (i - m_iHead) << "人" << endl;
		cout << endl;
	}
	
}