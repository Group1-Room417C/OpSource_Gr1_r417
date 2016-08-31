#include <stdio.h>
#include <conio.h>
#include <iostream>
#include <math.h>

using namespace std;

class Mammal
{
	public:
		void Speak() 
		{
		cout << 'M' <<endl;
		}
};

class Dog : public Mammal
{
	public:
		void Speak() 
		{
		cout << 'Do' <<endl;
		}
};
int main()
{
	Mammal m;
	Dog d;
	m.Speak();		// Mamal
	d.Speak();		// Dog
	d.Mammal::Speak();
}

