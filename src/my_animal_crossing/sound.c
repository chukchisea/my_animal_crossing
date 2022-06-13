/*
** EPITECH PROJECT, 2022
** B-MUL-100-REN-1-1-myanimal_crossing-marin.maurer
** File description:
** sound
*/

#include "my_animal_crossing.h"

static void what_music_play(game_t *game)
{
    switch (game->nb_scenes) {
    case 0 : game->music_menu = true;
            game->music_game = false;
            game->music_magasin = false;
        break;
    case 1 : game->music_menu = false;
            game->music_game = true;
            game->music_magasin = false;
        break;
    case 2  : game->music_menu = false;
            game->music_game = false;
            game->music_magasin = true;
        break;
    }
}

static void play_music(game_t *game, sounds_t *music)
{
    sfMusic_play(music->sound);
    sfMusic_setLoop(music->sound, sfTrue);
    sfMusic_setVolume(music->sound, 30);
    what_music_play(game);
}

void set_music(game_t *game, sounds_t *sound)
{
    if (game->sounds_on == true) {
        sounds_t *music = game->scenes[game->nb_scenes]->sound[sound->num_music];
        play_music(game, music);
    }
}
