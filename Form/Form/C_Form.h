#pragma once
#include<iostream>
class C_Form
{
private:
	short* _age;
	const char* _name;
	const char* _number;
public:
	C_Form()
	{
		this->_age = new short(0);
		this->_name = new const char[1];
		this->_number = new const char[1];
	}
	C_Form(short age, const char* name, const char* number)
	{
		this->_age = new short(age);
		this->_name = name;
		this->_number = number;
	}
	short get_age()
	{
		return *this->_age;
	}
	const char* get_name()
	{
		return this->_name;
	}
	const char* get_number()
	{
		return this->_number;
	}
	friend std::ostream& operator <<(std::ostream& out, const C_Form& obj)
	{
		out << "Age: " << *(obj._age) << "\n" << "Name: " << obj._name << "\n" << "Phone number: " << obj._number << "\n";
		return out;
	}
};