#include "MedalRow.h"
#include<iostream>
#include<cassert>

using namespace std;

const char* MedalRow::getCountry() const {
	return this->country;
}
int& MedalRow::operator[](int idx) {
	assert((idx >= 0 and idx < 3) and "Index out "
		"of range!");
	return this->medals[idx];
}
int MedalRow::operator[](int idx) const {
	assert((idx >= 0 and idx < 3) and "Index out "
		"of range!");
	return this->medals[idx];
}
void MedalRow::print() const {
	cout << '[' << this->country << "]-( ";
	for (int i{ 0 }; i < 3; ++i)
	{
		cout << this->medals[i];
		if (i < 2) { cout << '\t'; }
	}
	cout << " )\n";
}