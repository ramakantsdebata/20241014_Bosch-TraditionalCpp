#ifndef CTIME_H
#define CTIME_H

#include <iostream>
using namespace std;

class cTime
{
	int m_Seconds;
	int m_Minutes;
	int m_Hours;

public:
	cTime();
	cTime(int sec, int min, int hrs);
	cTime(const cTime& obj);
	void setSeconds(int val);
	void setMinutes(int val);
	void setHours(int val);

	int getSeconds() const;
	int getMinutes() const;
	int getHours() const;

	cTime operator+(const cTime& obj);
	cTime& operator++();		// Pre
	//cTime  operator++(int);		// Post
	friend cTime operator++(cTime& obj, int);
	friend void Display(const cTime& obj);
	friend ostream& operator<<(ostream& out, const cTime& t);
};

cTime operator++(cTime& obj, int);

void Display(const cTime& obj);

// cout << t1
// cout << t1 << " " << t2 << endl;
ostream& operator<<(ostream& out, const cTime& t);


#endif	//CTIME_H