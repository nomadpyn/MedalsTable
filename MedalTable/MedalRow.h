#pragma once
#include<iostream>
using namespace std;
// класс MedalRow
class MedalRow
{
private:
	char country[4];
	int medals[3];
public:
// static поля класса для доступа к медалям
	static const int GOLD{ 0 };
	static const int SILVER{ 1 };
	static const int BRONZE{ 2 };
// конструктор с параметрами
	MedalRow(const char* countryP, const int* medalsP){
		strcpy_s(country, 4, countryP ? countryP : "NON");
		for (int i{ 0 }; i < 3; ++i){
			medals[i] = medalsP ? medalsP[i] : 0;
		}
	}
// конструктор по умолчанию
	MedalRow() : MedalRow(nullptr, nullptr) {}
// объявление методов и фукнции класса
	const char* getCountry()const;
	int& operator[](int idx);
	int operator[](int idx)const;
	void print()const;
	MedalRow& setCountry(const char* countryP);
	friend ostream& operator << (ostream& out, const MedalRow& obj);
};

