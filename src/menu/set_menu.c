/*
** EPITECH PROJECT, 2022
** B-MUL-100-REN-1-1-myhunter-marin.maurer
** File description:
** set_menu
*/

#include "my_menu.h"

void set_button_menu(game_objet_t **buttons, init_t *init_button_menu, int i)
{
    buttons[i]->texture = sfTexture_createFromFile(init_button_menu->File, NULL);
    buttons[i]->sprite = sfSprite_create();
    buttons[i]->position = (sfVector2f){init_button_menu->position[0], init_button_menu->position[1]};
    buttons[i]->rect = (sfIntRect){init_button_menu->rect[0], init_button_menu->rect[1], init_button_menu->rect[2], init_button_menu->rect[3]};
    buttons[i]->scale = (sfVector2f){init_button_menu->scale[0], init_button_menu->scale[1]};
    buttons[i]->size = (sfVector2f){init_button_menu->size[0], init_button_menu->size[1]};
    buttons[i]->hide = init_button_menu->hide;
}
