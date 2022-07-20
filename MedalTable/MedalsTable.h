#pragma once
#include"MedalRow.h"
using namespace std;
// класс MedalsTable
class MedalsTable
{
private:
	int size;
	MedalRow * medalRows;
	int findCountry(const char* country) const;
public:
// конструктор по умолчанию
	MedalsTable() : size{ 0 } {
		this->medalRows = nullptr;
	};
// конструктор копирования
	MedalsTable(const MedalsTable& other);
// деструктор
	~MedalsTable() {
		delete[]this->medalRows;
	}
// описание методов и функции класса
	void print()const;
	MedalRow& operator[](const char* country);
	friend ostream& operator << (ostream& out, const MedalsTable& obj);
};

