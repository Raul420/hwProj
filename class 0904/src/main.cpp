#include <iostream>
#include <stdbool.h>
#include <cstring>
class OverloadStudy
{
	static int counter;
	int id;
	double m_x = 0, m_y = 0;
	int m_n;
	int m_array[10];
	char *m_data; int m_len;
public:
	OverloadStudy()
	{
		m_x = 1; m_y= 1; m_n = 1;
	}
	OverloadStudy(int n = 1):m_n(n)
	{
		id = ++counter;
		std::cout<<"класс создан: номер "<<id<<'\n';}
	OverloadStudy(double x = 0, double y = 0): m_x(x), m_y(y) {
		id = ++counter;
		std::cout<<"класс создан: номер "<<id<<'\n';}
	OverloadStudy operator++(int);
	OverloadStudy & operator --();
	void display() const{ std::cout<< m_n<<'\n';}
	friend std::istream& operator>> (std::istream &in, OverloadStudy &study);
	friend std::ostream& operator<< (std::ostream &out, OverloadStudy &study);
	friend bool operator>(const OverloadStudy &study1, const OverloadStudy &study2);
};
OverloadStudy OverloadStudy::operator ++(int)
{
	OverloadStudy tmp(m_n);
	++(this->m_n);
	return tmp;
}
OverloadStudy &OverloadStudy::operator--()
{
	if (m_n==0) m_n=8;
	else --m_n;
	return *this;
}
	
int OverloadStudy::counter = 0;
std::istream& operator>> (std::istream &in, OverloadStudy &study)
{
	in >> study.m_x;
	in >> study.m_y;
	return in;
}
std::ostream& operator<< (std::ostream &out, OverloadStudy &study)
{
	if (study.m_x && study.m_y)
	{out << "X равен: " <<study.m_x<<'\n'<<"Y равен: "<<study.m_y<<std::endl;}
	if (study.m_n)
	{
		out << "число равно: "<< study.m_n<<std::endl;
	}
	return out;
}
bool operator>(const OverloadStudy &study1, const OverloadStudy &study2)
{
	return study1.m_n>study2.m_n;
}
class IntArray
{
	int m_array[10];
public:
	IntArray()
	{
		for (int i = 0; i < 10; i++)
		{
			m_array[i] = i;
		}
	}
	int& operator[](const int index);
};
int& IntArray::operator[](const int index)
{
	return m_array[index];
}
class SomeString
{
	char* m_data;
	int m_len;
public:
	//Конструктор
	SomeString(const char* source="cool") 
	{
		m_len = strlen(source);
		m_data = new char[m_len];
		for(int i = 0;i<m_len;++i) m_data[i] = source[i];
	}
	//Деструктор
	~SomeString()
	{ 
		delete[]m_data;
		std::cout<<"Деструктор"<<std::endl;
	}
	void getString(){for(int i = 0;i<m_len;++i) std::cout<<m_data[i]; std::cout<<"\n";}
	int getLen(){return m_len;}
	SomeString& operator=(const SomeString& source) 
	{
        if (this != &source) {
            deepcopy(source);
        }
        return *this;
    }
	SomeString(const SomeString& source);
	void deepcopy(const SomeString& source);
};
void SomeString::deepcopy(const SomeString& source)
{
	m_len = source.m_len;
	if(source.m_data)
	{	
		delete[]m_data;
		m_data = new char[m_len];
		for(int i = 0;i<m_len;++i) m_data[i] = source.m_data[i];
	}
	else m_data=0;
}
SomeString::SomeString(const SomeString& source)
{
	deepcopy(source);
}
class Centimeter
{
	double value;
public:
	Centimeter(double val): value(val){};
	double getValue()
	{ return value;}
};
class Meter
{
	double value;
public:
	Meter(double val): value(val){}
	double getValue()
	{ return value;}
};
int main()
{
	//~ OverloadStudy study1(4);
	//~ OverloadStudy study2(3);
	//~ study1.display();
	//~ study1++;
	//~ study1.display();
	//~ --study1;
	//~ study1.display();
	//~ IntArray array;
	//~ array[4]=7;
	//~ for (int i = 0; i < 10; i++)
		//~ {
			//~ std::cout<<"Элемент массива: "<<array[i]<<std::endl;
		//~ }s
	SomeString str1("first");
	str1.getString();
	SomeString str2("two");
	str2.getString();
	std::cout<<"первый c во второй"<<std::endl;
	str2 = str1;
	str2.getString();
	SomeString str3(str1);
	str3.getString();
	//Centimeter cwidth(100);
	//SomeString str2("second");
	return 0;
}
