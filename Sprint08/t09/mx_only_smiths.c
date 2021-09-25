#include "only_smiths.h"

t_agent **mx_only_smiths(t_agent **agents, int strength) {
    if(agents == NULL)
    {
        return NULL;
    }
    int counter = 0;
    for(int i = 0; agents[i] != NULL; i++)
    {
        if(mx_strcmp(agents[i]->name, "Smith") == 0 && agents[i]->strength < strength)
        {
            counter++;
        }
    }
    t_agent **nag = malloc(16 * counter + 1);
    int j = 0;
    for(int i = 0; agents[i] != NULL; i++) 
    {
        if(mx_strcmp(agents[i]->name, "Smith") == 0 && agents[i]->strength < strength) 
        {
            nag[j] = mx_create_agent(agents[i]->name, agents[i]->power, agents[i]->strength);
            j++; 
        }
    }
    nag[j] = NULL;
    mx_exterminate_agents(&agents);
    return nag;
}

