#pragma once
#include"MedalRow.h"
// класс MedalsTable
class MedalsTable
{
private:
	int size;
	MedalRow * medalRows;
	int findCountry(const char* country) const;
public:
// конструктор с параметрами
	MedalsTable(int szP) : size{ szP } {
		if (szP == 0)
			this->medalRows = nullptr;
		else
			this->medalRows = new MedalRow[szP];
	}
// конструктор по умолчанию
	MedalsTable() : MedalsTable(0) {};
	~MedalsTable() {
		delete[]this->medalRows
	}
};

