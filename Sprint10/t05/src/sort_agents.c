#include "header.h"

void sort_agents(t_agent ***agent_set, char *flag) {
    int p_buff, s_buff, size = 1;
    char *n_buff;
    while ((*agent_set)[size])
        size++;
    if(!mx_strcmp(flag, "-p")) {
        for (int i = 1; i < size; i++)
            for (int j = 0; j < size - i; j++)
                if((*agent_set)[j]->power > (*agent_set)[j + 1]->power) {
                    p_buff = (*agent_set)[j]->power;
                    s_buff = (*agent_set)[j]->strength;
                    n_buff = (*agent_set)[j]->name;
                    (*agent_set)[j]->power = (*agent_set)[j + 1]->power;
                    (*agent_set)[j]->strength = (*agent_set)[j + 1]->strength;
                    (*agent_set)[j]->name = (*agent_set)[j + 1]->name;
                    (*agent_set)[j+1]->power = p_buff;
                    (*agent_set)[j+1]->strength = s_buff;
                    (*agent_set)[j+1]->name = n_buff;
                }
    }
    else if (!mx_strcmp(flag, "-s")) {
        for (int i = 1; i < size; i++)
            for (int j = 0; j < size - i; j++)
                if((*agent_set)[j]->strength > (*agent_set)[j + 1]->strength) {
                    p_buff = (*agent_set)[j]->power;
                    s_buff = (*agent_set)[j]->strength;
                    n_buff = (*agent_set)[j]->name;
                    (*agent_set)[j]->power = (*agent_set)[j + 1]->power;
                    (*agent_set)[j]->strength = (*agent_set)[j + 1]->strength;
                    (*agent_set)[j]->name = (*agent_set)[j + 1]->name;
                    (*agent_set)[j+1]->power = p_buff;
                    (*agent_set)[j+1]->strength = s_buff;
                    (*agent_set)[j+1]->name = n_buff;
                }
    }
    else if (!mx_strcmp(flag, "-n")) {
        for (int i = 1; i < size; i++)
            for (int j = 0; j < size - i; j++)
                if(mx_strcmp((*agent_set)[i]->name, (*agent_set)[j + 1]->name) > 0) {
                    p_buff = (*agent_set)[j]->power;
                    s_buff = (*agent_set)[j]->strength;
                    n_buff = (*agent_set)[j]->name;
                    (*agent_set)[j]->power = (*agent_set)[j + 1]->power;
                    (*agent_set)[j]->strength = (*agent_set)[j + 1]->strength;
                    (*agent_set)[j]->name = (*agent_set)[j + 1]->name;
                    (*agent_set)[j+1]->power = p_buff;
                    (*agent_set)[j+1]->strength = s_buff;
                    (*agent_set)[j+1]->name = n_buff;
                }
    }
}

