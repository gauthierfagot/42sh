/*
** EPITECH PROJECT, 2024
** 42sh
** File description:
** string_formating
*/

#include "header_test.h"
#include "functions.h"

Test(First, my_array_concat)
{
    char *first[] = {"HELLO",
                    NULL};
    char *second[] = {"WORLD",
                    NULL};
    char *res[] = {"HELLO", "WORLD", NULL};

    cr_assert_arr_eq(res, array_concat(first, second), 0);
}

Test(Second, clear_special)
{
    char input[] = {'L',
                    'O',
                    'L',
                    '>',
                    '\0'};
    char res[] = {'L',
                'O',
                'L',
                '\1',
                '>',
                '\1',
                '\0'};
    cr_assert_str_eq(res, clear_special(input), "LOSE");
}

Test(third, format_input)
{
    char *input[] = {"WOW",
                    "WORKING?",
                    NULL};
    char **input_twod = format_arguments(input, " \t\n", "\"\'");

    cr_assert_eq(0, format_input(&input_twod), "NO");
}
