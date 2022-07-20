#include<iostream>
#include"MedalsTable.h"

using namespace std;

int main() {

	MedalsTable mt1;
	mt1["UKR"][MedalRow::GOLD] = 14;
	mt1["UKR"][MedalRow::SILVER] = 5;
	mt1["HUN"][MedalRow::BRONZE] = 9;
	mt1["HUN"][MedalRow::GOLD] = 7;
	mt1["POL"][MedalRow::GOLD] = 4;
	mt1["POL"][MedalRow::SILVER] = 2;
	mt1["RUS"][MedalRow::GOLD] = 4;
	mt1["RUS"][MedalRow::SILVER] = 2;
	cout << mt1;
	MedalsTable mt2{ mt1 };
	cout << "-------------------\n";
	cout << mt2;
	return 0;
}