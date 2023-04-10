/*
** EPITECH PROJECT, 2023
** B-MUL-200-REN-2-1-myrpg-louis.langanay
** File description:
** e_save2
*/

#include "rpg.h"

void e_save2(int id, void *main)
{
    (void)id;
    rpg_t *rpg = (rpg_t *)main;

    parsed_data_t *data = jp_parse("saves/save2.json");
    if (data == NULL) return;
    start_game(rpg, jp_search(data, "save_file.path")->value.p_str);
}
