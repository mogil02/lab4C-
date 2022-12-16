#pragma once
template <typename T>

class TempClass {
private:
	T ret;
public:
	TempClass() {}
	T set() {
		cin >> ret;
		return ret;
	}
};