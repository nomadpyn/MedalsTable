#include "MedalRow.h"
#include<iostream>
#include<cassert>

using namespace std;
// геттер для названия страны объекта
const char* MedalRow::getCountry() const {
	return this->country;
}
// перегрузка оператора []
int& MedalRow::operator[](int idx) {
	assert((idx >= 0 and idx < 3) and "Index out "
		"of range!");
	return this->medals[idx];
}
// перегрузка оператора [] для константного объекта
int MedalRow::operator[](int idx) const {
	assert((idx >= 0 and idx < 3) and "Index out "
		"of range!");
	return this->medals[idx];
}
// метод вывода информация об объекте в консоль
void MedalRow::print() const {
	cout << '[' << this->country << "]-( ";
	for (int i{ 0 }; i < 3; ++i)
	{
		cout << this->medals[i];
		if (i < 2) { cout << '\t'; }
	}
	cout << " )\n";
}
// сеттер для названия страны объекта
MedalRow& MedalRow::setCountry(const char* countryP){
	if (countryP) {
		strcpy_s(country, 4, countryP);
	}
	return *this;
}