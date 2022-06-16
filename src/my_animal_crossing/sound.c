/*
** EPITECH PROJECT, 2022
** B-MUL-100-REN-1-1-myanimal_crossing-marin.maurer
** File description:
** sound
*/

#include "my_animal_crossing.h"

static void what_music_play(game_t *game, int music_scene, int numero_scenes)
{
    if (game->music[numero_scenes] == false) {
        sfMusic_play(game->scenes[numero_scenes]->sound[music_scene]->sound);
        sfMusic_setLoop(game->scenes[numero_scenes]->sound[music_scene]->sound, sfTrue);
        sfMusic_setVolume(game->scenes[numero_scenes]->sound[music_scene]->sound, game->nb_volume);
        for (int i = 0; i < SIZE; i++) {
            if (i == numero_scenes)
                game->music[i] = true;
            else
                game->music[i] = false;
        }
    }
}

static void play_music(game_t *game)
{
    int music_scene = game->scenes[game->nb_scenes]->sound[game->nb_scenes]->num_music;
    int numero_scenes = game->nb_scenes;
    what_music_play(game, music_scene, numero_scenes);
}


void set_music(game_t *game, sounds_t *sound)
{
    if (game->sounds_on == true) {
        play_music(game);
    }
}
