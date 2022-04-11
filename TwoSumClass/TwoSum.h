#pragma once
#include<unordered_map>
class TwoSum {
	std::unordered_map<int, int> internalStore;
public:
	void add(int num);
	bool find(const int& target);
};