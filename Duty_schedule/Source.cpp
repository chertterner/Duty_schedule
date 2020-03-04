#include"Duty_schedule.h"

int main()
{
	Duty_schedule duty_schedule;
	duty_schedule.create_groups();
	duty_schedule.fill_days_by_kinds_of_duties();

}