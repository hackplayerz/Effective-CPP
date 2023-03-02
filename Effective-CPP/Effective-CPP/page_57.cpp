#include <iostream>
using namespace std;
#define CALL_WITH_MAX(a,b) ((a) > (b) ? (a) : (b))

template<typename T>
inline int callWithMax(const T& a, const T& b)
{
	return (a > b ? a : b);
}

int main(int argc, char* argv[])
{
	int a = 5, b = 0;
	cout << CALL_WITH_MAX(++a, b) << endl; // 7
	cout << CALL_WITH_MAX(++a, b+10) << endl; // 10

	cout << "=====================" << endl;
	a = 5; b = 0;
	cout << callWithMax(++a, b) << endl; // 6
	cout << callWithMax(++a, b + 10) << endl; // 10

	return 0;
}
