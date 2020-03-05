#include"Duty_schedule.h"

int main()
{
	Duty_schedule duty_schedule;
	duty_schedule.create_groups();
	duty_schedule.fill_days_by_kinds_of_duties();
	duty_schedule.fill_groups_duty_schedule();
	duty_schedule.show_duty_schedule();
	duty_schedule.show_groups_duty_schedules();
	system("pause");
	return 0;
}