#ifndef AGENT_H
#define AGENT_H

#include <stdlib.h>
#include <stdio.h>
#include "agent.h"

char *mx_strnew(const int);
char *mx_strcpy(char *dst, const char *src);
int mx_strlen(const char *s);
char *mx_strdup(const char *str);
t_agent *mx_create_agent(char *name, int power, int strength);

#endif

