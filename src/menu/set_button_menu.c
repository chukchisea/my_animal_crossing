/*
** EPITECH PROJECT, 2022
** B-MUL-100-REN-1-1-myhunter-marin.maurer
** File description:
** set_init_menu
*/

#include "my_menu.h"

void button_new_game_set(init_t *game_obj)
{
    game_obj->texture[0] = 845;
    game_obj->texture[1] = 800;
    game_obj->position[0] = 0;
    game_obj->position[1] = 0;
    game_obj->rect[0] = 0;
    game_obj->rect[1] = 0;
    game_obj->rect[2] = 223;
    game_obj->rect[3] = 100;
    game_obj->scale[0] = 1;
    game_obj->scale[1] = 1;
    game_obj->size[0] = 180;
    game_obj->size[1] = 177;
    game_obj->hide = false;
    game_obj->File = "sprite/menu/new_game.png";
}

void button_load_save_set(init_t *game_obj)
{
    game_obj->texture[0] = 400;
    game_obj->texture[1] = 400;
    game_obj->position[0] = 800;
    game_obj->position[1] = 900;
    game_obj->rect[0] = 10;
    game_obj->rect[1] = 10;
    game_obj->rect[2] = 10;
    game_obj->rect[3] = 10;
    game_obj->scale[0] = 0.5;
    game_obj->scale[1] = 0.5;
    game_obj->size[0] = 1;
    game_obj->size[1] = 1;
    game_obj->hide = false;
    game_obj->File = "sprite/menu/load_save.png";
}

void button_quit_set(init_t *game_obj)
{
    game_obj->texture[0] = 400;
    game_obj->texture[1] = 400;
    game_obj->position[0] = 800;
    game_obj->position[1] = 600;
    game_obj->rect[0] = 10;
    game_obj->rect[1] = 10;
    game_obj->rect[2] = 10;
    game_obj->rect[3] = 10;
    game_obj->scale[0] = 0.5;
    game_obj->scale[1] = 0.5;
    game_obj->size[0] = 1;
    game_obj->size[1] = 1;
    game_obj->hide = false;
    game_obj->File = "sprite/menu/Quit.png";
}

void button_setting_set(init_t *game_obj)
{
    game_obj->texture[0] = 400;
    game_obj->texture[1] = 400;
    game_obj->position[0] = 800;
    game_obj->position[1] = 600;
    game_obj->rect[0] = 10;
    game_obj->rect[1] = 10;
    game_obj->rect[2] = 10;
    game_obj->rect[3] = 10;
    game_obj->scale[0] = 0.5;
    game_obj->scale[1] = 0.5;
    game_obj->size[0] = 1;
    game_obj->size[1] = 1;
    game_obj->hide = false;
    game_obj->File = "sprite/menu/Setting.png";
}


