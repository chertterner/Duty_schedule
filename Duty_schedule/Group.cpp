#include "Group.h"

Group::Group()
{
	cout << "Group ¹\n";
	getline(cin, number);
	fill_cadets_names();
}

void Group::fill_cadets_names()
{
	cout << "Enter the quantity cadets in the group\n";
	cin >> quantity_cadets;
	cin.ignore();
	cout << "Enter the full name of cadets\n";
	for (int number = 0; number < quantity_cadets; ++number)
	{
		string name;
		getline(cin, name);
		cadets.emplace_back(name);
	}
}

vector<string> Group::get_vec_cadet() const
{
	return cadets;
}

int Group::get_quantity_cadets() const
{
	return quantity_cadets;
}

string Group::get_number() const
{
	return number;
}

void Group::set_month_duties(int day,string name)
{
	month_duties[day].push_back(name);
}

void Group::show_duties()
{
	{
		for (const auto& day : month_duties)
		{
			cout << day.first << endl;
			for (const auto& name : day.second)
			{
				cout << name << " ";
			}
			cout << endl;
		}
	}
}
