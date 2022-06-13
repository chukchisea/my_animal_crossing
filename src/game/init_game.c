/*
** EPITECH PROJECT, 2022
** B-MUL-100-REN-1-1-myhunter-marin.maurer
** File description:
** init_game
*/

#include "my_game.h"

// static void init_music_game(sounds_t **sounds)
// {
//     sounds[0]->sound = sfMusic_createFromFile("sound/game_music.ogg");
// }

// static void init_game_like(game_objet_t **pictures)
// {

// }

void init_game(game_t *game)
{
    game->scenes[GAME]->nb_decors = 0;
    game->scenes[GAME]->nb_hp = 0;
    game->scenes[GAME]->nb_clocks = 0;
    game->scenes[GAME]->nb_mob_clocks = 0;
    game->scenes[GAME]->nb_enemies = 0;
    game->scenes[GAME]->nb_buttons = 0;
    game->scenes[GAME]->nb_pictures = 0;
    game->scenes[GAME]->nb_textes = 0;
    game->scenes[GAME]->nb_sound = 0;
    game->scenes[GAME] = malloc_scene(game->scenes[GAME]);
    //init_music_game(game->scenes[GAME]->sound);
    //init_game_like(game->scenes[GAME]->pictures);
    printf("scene game %p\n", game->scenes[GAME]);
}