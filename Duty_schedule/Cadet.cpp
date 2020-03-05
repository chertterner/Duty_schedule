#include "Cadet.h"

Cadet::Cadet()
{
	getline(cin, full_name);
}

string Cadet::get_cadets_name() const
{
	return full_name;
}
