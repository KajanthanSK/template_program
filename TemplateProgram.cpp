#include<iostream>

using namespace std;

template<typename T>
T add(T a, T b)
{
	return (a + b);
}

template <typename T>
class Box
{
private:
	T value;
public:
	void setValue(T v) { value = v; }
	T getValue() { return value; }
};

int main()
{
	int x = 5, y = 6;
	double p = 5.5, q = 6.6;

	cout << add(x, y) << endl; // Calls add<int>
	cout << add(p, q) << endl; // Calls add<double>

	Box<int> intBox;
	intBox.setValue(10);
	cout << intBox.getValue() << endl;

	Box<double> doubleBox;
	doubleBox.setValue(10.5);
	cout << doubleBox.getValue() << endl;

	return 0;
}

//template <typename T>
//class Box
//{
//private:
//	T value;
//public:
//	void setValue(T v) { value = v; }
//	T getValue() { return value; }
//};
//
//int main()
//{
//	Box<int> intBox;
//	intBox.setValue(10);
//	cout << intBox.getValue() << endl;
//
//	Box<double> doubleBox;
//	doubleBox.setValue(10.5);
//	cout << doubleBox.getValue() << endl;
//
//	return 0;
//}