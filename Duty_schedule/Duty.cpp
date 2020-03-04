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
