/*
** EPITECH PROJECT, 2022
** B-MUL-100-REN-1-1-myhunter-marin.maurer
** File description:
** init_pause
*/

#include "my_pause.h"

void init_pause(game_t *game)
{
    game->scenes[PAUSE]->nb_decors = 0;
    game->scenes[PAUSE]->nb_hp = 0;
    game->scenes[PAUSE]->nb_clocks = 0;
    game->scenes[PAUSE]->nb_mob_clocks = 0;
    game->scenes[PAUSE]->nb_enemies = 0;
    game->scenes[PAUSE]->nb_buttons = 0;
    game->scenes[PAUSE]->nb_pictures = 0;
    game->scenes[PAUSE]->nb_textes = 0;
    game->scenes[PAUSE]->nb_sound = 0;
    game->scenes[PAUSE] = malloc_scene(game->scenes[PAUSE]);
    printf("scene pause%p\n", game->scenes[PAUSE]);
}
