/*
** EPITECH PROJECT, 2022
** B-MUL-100-REN-1-1-myhunter-marin.maurer
** File description:
** set_decors_menu
*/

#include "my_menu.h"

void decors_setting_set(init_t *game_obj)
{
    game_obj->texture[0] = 400;
    game_obj->texture[1] = 400;
    game_obj->position[0] = 0;
    game_obj->position[1] = 0;
    game_obj->rect[0] = 0;
    game_obj->rect[1] = 0;
    game_obj->rect[2] = 1920;
    game_obj->rect[3] = 1080;
    game_obj->scale[0] = 1;
    game_obj->scale[1] = 1;
    game_obj->size[0] = 1920;
    game_obj->size[1] = 1080;
    game_obj->hide = false;
    game_obj->File = "sprite/menu/Menu.jpg";
}