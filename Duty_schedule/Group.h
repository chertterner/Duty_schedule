#pragma once
#include<vector>
#include<iostream>
#include<string>
#include<map>
#include"Duty.h"
using namespace std;
class Group
{
	string number;
	vector<string> cadets;
	int quantity_cadets;
	map<int, vector<string>> month_duties;
public:
	Group();
	void fill_cadets_names();
	vector<string> get_vec_cadet()const;
	int get_quantity_cadets()const;
	string get_number()const;
	void set_month_duties(int day,string name);
	void show_duties();
	
	
};
