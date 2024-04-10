/*
** EPITECH PROJECT, 2024
** functions
** File description:
** functions for 42sh
*/

#ifndef FUNCTION_H
    #define FUNCTION_H

    #include <stdbool.h>
    #include "env.h"

//error handling
bool check_main_args(int const argc);

//init
env_t *init_env(char const **env);
void init_own_env(env_list_t **env);

//env functions
char *search_env_value(char *variable, env_list_t **env);
void insert_in_env(char *variable, char *value, env_list_t **env_list);
char **get_env_array(env_list_t **env_list);

//print functions
void print_prompt(env_t *env);

//main functions
int start_shell(char const **env);
bool handle_line(char **args, env_t *env);
bool execute(char **args, env_t *env);
void update_status(int status, env_t *env);
void execute_file(char *executable, char **args, env_t *env);
void try_execute(char *path, char **args, char **env);

//string formating
char *clear_special(char *input);
char **format_arguments(char *line,
    const char *separators, const char *ignorer);
char **separate_line(char const *line);

//free
void free_env(env_t *);
void free_array(char **);

//side functions
char *int_to_str(int);
char **my_arraydup(char **);
int my_arraylen(char **);

#endif
