#pragma once
#include"Cadet.h"
#include<vector>
class Group
{
	string number;
	vector<unique_ptr<Cadet>> cadets;
	int quantity_cadets;
public:
	Group();
	void fill_cadets_names();
};
