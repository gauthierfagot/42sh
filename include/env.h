/*
** EPITECH PROJECT, 2024
** env
** File description:
** env structs
*/

#ifndef ENV_H
    #define ENV_H

    #include <stddef.h>
    #include <sys/wait.h>
    #include "history.h"

typedef struct env_list_s {
    char *variable;
    char *value;
    struct env_list_s *next;
}env_list_t;

typedef struct env_s {
    env_list_t **shell_variables;
    env_list_t **env_list;
    env_list_t **aliases;
    size_t last_return;
    char *old_pwd;
    history_list_t *history;
    char *history_path;
}env_t;

#endif
