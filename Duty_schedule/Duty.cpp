#include "Duty.h"

Duty::Duty(string name,int quantity_cadets)
{
	kind = name;
	cadets_quantity = quantity_cadets;
}

void Duty::fill_duty_by_cadets(string name)
{
	cadet_names.emplace_back(name);
}

int Duty::get_cadets_quantity() const
{
	return cadets_quantity;
}

void Duty::show() const
{
	for (const auto& name : cadet_names)
	{
		cout << name << " ";
	}
	cout << endl;
}

string Duty::get_kind() const
{
	return kind;
}
