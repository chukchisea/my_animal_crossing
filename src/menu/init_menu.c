/*
** EPITECH PROJECT, 2022
** B-MUL-100-REN-1-1-myhunter-marin.maurer
** File description:
** init_menu
*/

#include "my_menu.h"

static void init_program_button(game_t *game, int i)
{
    switch (i) {
    case 0 : button_new_game_set(game->init[BUTTONS]);
        break;
    case 1 : button_load_save_set(game->init[BUTTONS]);
        break;
    case 2  : button_quit_set(game->init[BUTTONS]);
        break;
    case 3 : button_setting_set(game->init[BUTTONS]);
        break;
    }
}

static void init_menu_set_button(game_t *game)
{
    for (int i = 0; i < game->scenes[MENU]->nb_buttons; i++) {
        init_program_button(game, i);
        set_button_menu(game->scenes[MENU]->buttons, game->init[BUTTONS], i);
    }
}

static void init_music_menu(sounds_t **sounds)
{
    sounds[0]->sound = sfMusic_createFromFile("sound/Menu_1.ogg");
}

static void init_menu_set_decors(game_t *game)
{
    decors_setting_set(game->init[DECORS]);
    set_button_menu(game->scenes[MENU]->decors, game->init[DECORS], 0);
}

void init_menu(game_t *game)
{
    game->scenes[MENU]->nb_decors = 1;
    game->scenes[MENU]->nb_hp = 0;
    game->scenes[MENU]->nb_clocks = 0;
    game->scenes[MENU]->nb_mob_clocks = 0;
    game->scenes[MENU]->nb_enemies = 0;
    game->scenes[MENU]->nb_buttons = 4;
    game->scenes[MENU]->nb_pictures = 0;
    game->scenes[MENU]->nb_textes = 0;
    game->scenes[MENU]->nb_sound = 1;
    game->scenes[MENU] = malloc_scene(game->scenes[MENU]);
    init_music_menu(game->scenes[MENU]->sound);
    init_menu_set_decors(game);
    init_menu_set_button(game);
}