// Lab_5_5
#include <iostream>
using namespace std;

double a(const int& n, int level, int &depth) {
	if (level > depth)
		depth = level;
	//cout << "L = " << level << endl;
	return n > 1 ?
		(2 * a(n - 1, level + 1, depth) + 8 / pow(a(n - 1, level + 1, depth), 2)) / 3
		: 1;
}

void main() {
	int deep = 0;
	double a_;
	cout << "a start "; cin >> a_;

	cout << a(a_, 1, deep) << endl;
	cout << deep << endl;

	// доведення

	for (size_t i = 1; i < 500; i++)
	{
		cout << i << " " << a(i, 1, deep);
	}
} 