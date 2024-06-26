/*
** EPITECH PROJECT, 2024
** 42sh
** File description:
** ctrl l
*/

#include <stddef.h>
#include "prompt.h"
#include "functions.h"
#include "complete.h"

int clear_terminal(prompt_t *prompt, env_t *env)
{
    reset_autocompletion(prompt, env);
    dprintf(1, "\033c");
    print_input_line(prompt, env, true);
    return prompt->index;
}
