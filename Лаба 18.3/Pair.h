#pragma once
#include <iostream>
#include <string>
using namespace std;
class Pair
{
	int First;
	double Second;
public:
	Pair();
	Pair(int First, double Second);
	Pair(const Pair& p);
	~Pair();
	void Show();
	void Set_First(int N);
	void Set_Second(double D);

	
	bool operator< (const Pair& r);
	bool operator> (const Pair& r);
	
	Pair& operator++ ();
	Pair operator++ ( int );
};