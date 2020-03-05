#pragma once
#include"Group.h"
#include"Duty.h"
#include<map>
#include<set>
#include<stdlib.h>
#include<time.h>
#include<algorithm>
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
	void show_duty_schedule();
	void fill_groups_duty_schedule();
	void fill_group_duties( vector<string>& cadets, Group* group);
	void fill_duty_by_cadets(vector<string>& cadets, Duty* duty, Group* group,int day);
	void show_groups_duty_schedules();
	

	
};
