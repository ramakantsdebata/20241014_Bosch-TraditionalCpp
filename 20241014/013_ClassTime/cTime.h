#ifndef CTIME_H
#define CTIME_H

class cTime
{
	int m_Seconds;
	int m_Minutes;
	int m_Hours;

public:
	cTime();
	cTime(int sec, int min, int hrs);
	void setSeconds(int val);
	void setMinutes(int val);
	void setHours(int val);

	int getSeconds();
	int getMinutes();
	int getHours();

	cTime& operator++();		// Pre
	//cTime  operator++(int);		// Post
	friend cTime operator++(cTime& obj, int);
	friend void Display(const cTime& obj);
};

cTime operator++(cTime& obj, int);

void Display(const cTime& obj);

#endif	//CTIME_H