#ifndef SMARTPTR_H
#define SMARTPTR_H

class Point;

class SmartPtr
{
	Point* m_pData;
	int* m_refCount;

public:
	SmartPtr() : m_pData(NULL)
	{
	}

	SmartPtr(Point* ptr) : m_pData(ptr)
	{
		m_refCount = new int(1);
	}

	SmartPtr(const SmartPtr& sp) : m_pData(sp.m_pData), m_refCount(sp.m_refCount)
	{
		++(*m_refCount);
	}

	~SmartPtr()
	{
		--(*m_refCount);
		if(m_refCount == 0)
			delete m_pData;
	}

	SmartPtr& operator=(const SmartPtr& sp)
	{
		m_pData = sp.m_pData;
		m_refCount = sp.m_refCount;
		++(*m_refCount);
		return *this;
	}

	Point& operator*()
	{
		return *m_pData;
	}

	Point* operator->()
	{
		return m_pData;
	}
};

#endif  // SMARTPTR_H