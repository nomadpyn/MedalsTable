﻿#include "MedalsTable.h"
#include<iostream>

using namespace std;
// проверка есть ли уже такая страна в объекте
int MedalsTable::findCountry(const char* country) const {
	for (int i{ 0 }; i < size; i++)	{
		if (strcmp(medalRows[i].getCountry(),
			country) == 0)	{
			return i;
		}
	}
	return -1;
}
// метод вывода информации об объекте в консоль
void MedalsTable::print()const {
	for (int i{ 0 }; i < size; i++)	{
		medalRows[i].print();
	}
}
// перегрузка оператора [] 
MedalRow& MedalsTable::operator[] (const char* country) {
	int idx{ findCountry(country) };
	if (idx == -1)	{
		idx = this->size;
		this->size++;
		MedalRow * temp = new MedalRow[size];
		for (int i = 0; i < idx; i++) {
			temp[i] = this->medalRows[i];
		}
		temp[idx].setCountry(country);
		delete[] this->medalRows;
		this->medalRows = new MedalRow[size];
		for (int i = 0; i < size; i++) {
			this->medalRows[i] = temp[i];
		}
		delete[] temp;
		
	}
	return medalRows[idx];
}
// перегрузка оператора вывода данных в консоль
ostream& operator << (ostream& out, const MedalsTable& obj) {
	for (int i{ 0 }; i < obj.size; i++) {
		cout << obj.medalRows[i];
	}
	return out;
}
// конструктор копирования
MedalsTable::MedalsTable(const MedalsTable& other) {
	if (this->medalRows != nullptr)
		delete this->medalRows;
	this->size = other.size;
	this->medalRows = new MedalRow[this->size];
	for (int i = 0; i < this->size; i++)
		this->medalRows[i] = other.medalRows[i];
}
// перегрузка оператора = для копирования
MedalsTable& MedalsTable::operator=(const MedalsTable& other){
	if (this == &other)
		return *this;
	delete this->medalRows;
	this->size = other.size;
	this->medalRows = new MedalRow[this->size];
	for (int i = 0; i < this->size; i++)
		this->medalRows[i] = other.medalRows[i];
	return *this;
}
