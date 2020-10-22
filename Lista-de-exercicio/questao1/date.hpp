#ifndef _DATE_
#define _DATE_

#include<iostream>

using namespace std;

class date{
protected:
	int year_;
	int month_;
	int day_;
public:
	date();
	date(const int& d,const int& m,const int& y);
	bool valid(void)const;

	int day()const;
	int month()const;
	int year()const;

	void set_day(const int&d ay);
	void set_month(const int &month);
	void set_year(const int& year);
	
	date operator ++();//  prefix
	date operator ++(int);//  postfix
	date operator --();//  prefix
	date operator --(int);//  postfix
};


bool operator == (constdate&,constdate&);//  comparison  operators
bool operator != (constdate&,constdate&);
bool operator <(constdate&,constdate&);
bool operator >(constdate&,constdate&);
bool operator <= (constdate&,constdate&);
bool operator >= (constdate&,constdate&);

ostream& operator << (ostream& os,constdate& d);//  output  operator
#endif
