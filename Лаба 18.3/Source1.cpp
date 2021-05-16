#include <iostream>
#include "Pair.h"
#include <string>

using namespace std;

Pair::Pair()
{
	First = 1;
	Second = 1;
}

Pair::Pair(int First, double Second)
{
	this->First = First;
	this->Second = Second;
}

Pair::Pair(const Pair& p)
{
	this->First = p.First;
	this->Second = p.Second;
}

Pair::~Pair() {}

void Pair::Show()
{
	cout << First << " : " << Second << endl;
}

void Pair::Set_First(int N)
{
	First = N;
}

void Pair::Set_Second(double D)
{
	Second = D;
}

bool Pair::operator< (const Pair& r) {
	return (First < r.First) && (Second < r.Second);
}

bool Pair::operator> (const Pair& r) {
	return (First > r.First) && (Second > r.Second);
}

Pair& Pair::operator++ ()
{
	First++;
	return *this;
}

Pair Pair::operator++ (int)
{
	Pair old(First, Second);
	Second++;
	return old;
}

/*

++name

name++

f = Pair(1,2)

a = f++ Pair(1,2)     f = 4
a = ++f Pair(2,3)     f = 4

*/