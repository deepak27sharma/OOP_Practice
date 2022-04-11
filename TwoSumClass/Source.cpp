#include <iostream>
#include "TwoSum.h"
using namespace std;

int main() {
	TwoSum ts;
	ts.add(7);
	ts.add(11);
	ts.add(15);
	ts.add(2);
	ts.add(2);
	cout << "find(9): " << ts.find(9) << endl;
	cout << "find(11): " << ts.find(11) << endl;
	cout << "find(13): " << ts.find(13) << endl;
	cout << "find(30): " << ts.find(30) << endl;
	cout << "find(4): " << ts.find(4) << endl;
	return 0;
}