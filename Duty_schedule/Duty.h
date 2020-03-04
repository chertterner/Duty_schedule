#pragma once
#include<string>
#include<vector>
using namespace std;

class Duty
{
	string kind;
	int cadets_quantity;
	vector<string> cadet_names;
public:
	 Duty(string name, int quantity_cadets);
	void fill_duty_by_cadets(string name);

};
