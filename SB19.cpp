#include <iostream>

template<class T>
class Animal
{
	T value;
public:
	Animal() {}
	Animal(T _value) : value(_value) {}

	virtual void Voice()
	{
		value = "Ra-ta-ta";
		std::cout << value << "\n";
	}

};

class Dog:Animal<std::string>
{
	std::string value;
public:
	void Voice() override
	{
		value = "Woof";
		std::cout << value << "\n";
	}

};



int main()
{
	Animal<std::string>* ptrInt = new Animal<std::string>();
	ptrInt->Voice();

}