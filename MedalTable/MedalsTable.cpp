#include "MedalsTable.h"
#include<iostream>

using namespace std;
// проверка есть ли уже такая страна в объекте
int MedalsTable::findCountry(const char* country) const {
	for (int i{ 0 }; i < size; ++i)	{
		if (strcmp(medalRows[i].getCountry(),
			country) == 0)	{
			return i;
		}
	}
	return -1;
}