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
	for (int kind = 0; kind < quantity_kinds; ++kind)
	{
		string name;
		int quantity_cadets_per_day;
		cout << "Enter  kind of duty\n";
		getline(cin, name);
		kinds_of_duties.emplace_back(name);
		cout << "Enter how many cadets must be in this kind of duty per day\n";
		cin >> quantity_cadets_per_day;
		cin.ignore();
		quantity_cadets_in_duty_per_day.emplace_back(quantity_cadets_per_day);
	}
}



void Duty_schedule::show_duty_schedule()
{
    for (const auto& day : month_duties)
	{
		cout << day.first << endl;
		for (const auto& duty : day.second)
		{
			cout << duty->get_kind() << ": ";
			duty->show();
		}
	}
}

void Duty_schedule::fill_groups_duty_schedule()
{
	for (const auto& group : groups)
	{
		vector<string> cadets = group->get_vec_cadet();
		fill_group_duties(cadets, group.get());
	}
}

void Duty_schedule::fill_group_duties( vector<string>& cadets,  Group* group)
{
	for (const auto& day : month_duties)
	{
		
		for (const auto& duty : day.second)
		{
			for (int i = 0; i < duty->get_cadets_quantity(); ++i)
			{
              fill_duty_by_cadets(cadets, duty.get(), group, day.first);
			}
			
		}
	}
}

void Duty_schedule::fill_duty_by_cadets(vector<string>& cadets, Duty* duty, Group* group,int day)
{
	if (cadets.empty())
	{
		cadets = group->get_vec_cadet();
	}
	random_shuffle(cadets.begin(), cadets.end());
	string name = cadets.front();
	duty->fill_duty_by_cadets(name);
	group->set_month_duties(day, name);
	cadets.erase(cadets.begin());
}

void Duty_schedule::show_groups_duty_schedules()
{
	for (const auto& group : groups)
	{
		cout << "Group # " << group->get_number() << endl;
		group->show_duties();
    }
}





