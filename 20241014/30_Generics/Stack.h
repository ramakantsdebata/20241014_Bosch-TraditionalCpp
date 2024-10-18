#ifndef STACK_H
#define STACK_H
template<typename T>
class Stack
{
	int m_capacity;
	int m_top;
	T* m_pBuff;

public:
	Stack(int capacity) : m_capacity(capacity), m_top(-1), m_pBuff(new T[capacity])
	{
	}

	bool isFull()
	{
		if ((m_top + 1) == m_capacity)
			return true;
		return false;
	}

	bool isEmpty()
	{
		if (m_top <= -1)
		{
			m_top = -1;
			return true;
		}
		return false;
	}

	void Push(T val)
	{
		if (isFull())
			throw std::out_of_range("Stack is Full!");
		m_pBuff[++m_top] = val;
	}

	T Pop()
	{
		if (isEmpty())
			throw std::out_of_range("Stack is Empty!");
		return m_pBuff[m_top--];
	}

	~Stack()
	{
		delete[] m_pBuff;
	}
};

#endif  // STACK_H