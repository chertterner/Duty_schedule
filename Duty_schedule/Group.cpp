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
		cadets.emplace_back(make_unique<Cadet>());
	}
}
