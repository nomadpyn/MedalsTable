#include<iostream>
#include"MedalsTable.h"

using namespace std;

int main() {

	MedalsTable mt1;
	mt1["UKR"][MedalRow::GOLD] = 4;
	mt1["UKR"][MedalRow::SILVER] = 5;
	mt1["HUN"][MedalRow::BRONZE] = 9;
	mt1["HUN"][MedalRow::GOLD] = 7;
	mt1["POL"][MedalRow::GOLD] = 4;
	mt1["POL"][MedalRow::SILVER] = 2;
	mt1["RUS"][MedalRow::GOLD] = 8;
	mt1["RUS"][MedalRow::SILVER] = 2;
	cout << mt1;
	MedalsTable mt2;
	mt2 = mt1;
	cout << "-------------------\n";
	cout << mt2 << endl;
	switch (mt1("RUS")) {
	case 0:
		cout << "Max medals in GOLD\n";
		break;
	case 1:
		cout << "Max medals in SILVER\n";
		break;
	case 2:
		cout << "Max medals in BRONZE\n";
		break;
	default:
		cout << "No medals\n";
		break;
	}
	return 0;
}