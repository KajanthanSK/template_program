#include<iostream>

using namespace std;

template<typename T>
T add(T a, T b)
{
	return (a + b);
}

int main()
{
	int x = 5, y = 6;
	double p = 5.5, q = 6.6;

	cout << add(x, y) << endl; // Calls add<int>
	cout << add(p, q) << endl; // Calls add<double>

	return 0;
}