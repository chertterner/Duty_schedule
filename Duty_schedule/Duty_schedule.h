#pragma once
#include"Group.h"
#include"Duty.h"
#include<map>
class Duty_schedule
{
	vector<unique_ptr<Group>> groups;
	map<int, vector<unique_ptr<Duty>>> month_duties;
	vector<string> kinds_of_duties;
	vector<int> quantity_cadets_in_duty_per_day;
	int quantity_groups;
public:
	Duty_schedule();
	void create_groups();
	void fill_days_by_kinds_of_duties();
	void fill_kind_of_duty();
};
