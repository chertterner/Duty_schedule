#include "Duty_schedule.h"

Duty_schedule::Duty_schedule()
{
}

void Duty_schedule::create_groups()
{
	cout << "Enter the quantity of groups\n";
	cin >> quantity_groups;
	cin.ignore();
	for (int index = 0; index < quantity_groups; ++index)
	{
		groups.emplace_back(make_unique<Group>());
	}
}

void Duty_schedule::fill_days_by_kinds_of_duties()
{
	fill_kind_of_duty();
	int quantity_month_days;
	cout << "Enter the quantity days in the month\n";
	cin >> quantity_month_days;
	cin.ignore();
	for (int day = 1; day <= quantity_month_days; ++day)
	{
		for (int index = 0; index < kinds_of_duties.size(); ++index)
		{
          month_duties[day].emplace_back(make_unique<Duty>(kinds_of_duties[index],quantity_cadets_in_duty_per_day[index]));
		}
		
	}
}

void Duty_schedule::fill_kind_of_duty()
{
	int quantity_kinds;
	cout << "Enter the quantity kinds of duties\n";
	cin >> quantity_kinds;
	cin.ignore();
	cout << "Enter  kinds of duties\n";
	for (int kind = 0; kind < quantity_kinds; ++kind)
	{
		string name;
		int quantity_cadets_per_day;
		getline(cin, name);
		kinds_of_duties.emplace_back(name);
		cout << "Enter how many cadets must be in this kind of duty per day\n";
		cin >> quantity_cadets_per_day;
		cin.ignore();
		quantity_cadets_in_duty_per_day.emplace_back(quantity_cadets_per_day);
	}
}
