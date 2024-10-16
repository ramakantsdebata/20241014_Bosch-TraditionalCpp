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
};

#endif	//CTIME_H