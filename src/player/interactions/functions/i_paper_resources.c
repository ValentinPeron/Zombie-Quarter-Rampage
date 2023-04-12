/*
** EPITECH PROJECT, 2023
** B-MUL-200-REN-2-1-myrpg-louis.langanay
** File description:
** i_paper_resources
*/

#include "rpg.h"

void i_paper_resources(rpg_t *rpg, sfVector2f pos)
{
    sfVector2f pos2 = {pos.x - 28, pos.y + 50};
    char *str = get_language(rpg, "paper_interact", RSG);
    draw_interaction_popup(rpg, pos2, RPK->interact.key, str);
    if (sfKeyboard_isKeyPressed(RPK->interact.key) == sfTrue) {
        while (sfKeyboard_isKeyPressed(RPK->interact.key) == sfTrue);
        rpg->player->lore_text = my_strdup(get_language(rpg,
            "resources_paper", RSG));
        rpg->player->lore_open = 1;
    }
}
