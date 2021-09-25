#include "create_new_agents.h"

t_agent **mx_create_new_agents(char **name, int *power, int *strength, int count) {
	if (!name || !power || !strength || !count)
    {
		return NULL;
    }
    t_agent **ag = malloc(4 * 4 * count + 1);
    for (int i = 0; i < count; i++)
    {
        ag[i] = mx_create_agent(name[i], power[i], strength[i]);
    }
    ag[count] = NULL;
    return ag;
}

