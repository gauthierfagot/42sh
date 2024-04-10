/*
** EPITECH PROJECT, 2024
** print prompt
** File description:
** print the prompt
*/

#include <stdio.h>
#include "env.h"
#include "functions.h"
#include "colors.h"

void print_prompt(env_t *env)
{
    char *username = search_env_value("USER", env->env_list);
    char *version = search_env_value("HOSTNAME", env->env_list);
    char *pwd = search_env_value("PWD", env->env_list);

    dprintf(1, "%s%s%s@", PURPLE, ((username == NULL) ? "" : username),
        DEFAULT);
    dprintf(1, "%s%s%s:", RED, ((version == NULL) ? "" : version), DEFAULT);
    dprintf(1, "%s%s%s > %ld\n$> ", CYAN, ((pwd == NULL) ? "" : pwd),
        DEFAULT, env->last_return);
}
