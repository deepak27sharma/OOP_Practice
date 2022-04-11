#include"TwoSum.h"
//#include<iterator>
using namespace std;
void TwoSum::add(int num) {
		if (internalStore.find(num) != internalStore.end()) {
			internalStore[num] += 1;
		}
		else {
			internalStore[num] = 1;
		}
}
bool TwoSum::find(const int& target) {
		for (auto it : internalStore) {
			if (target - it.first == it.first) {
				if (it.second >= 2) {
					return true;
				}
			} else if (internalStore.find(target - it.first) != internalStore.end()) {
				return true;
			}
		}
		return false;
}