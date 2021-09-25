#include "header.h"

t_agent *mx_create_agent(char *name, int power, int strength) {
	if (!name)
	{
		return NULL;
	}
	t_agent *ag = malloc(16);
	ag->name = mx_strdup(name);
	ag->power = (int)malloc(4);
	ag->strength = (int)malloc(4);
	ag->power = power;
	ag->strength = strength;
	return ag;
}


