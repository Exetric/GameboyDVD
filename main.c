// Install GBDK in order to compile

#include <gb/gb.h>
#include <stdio.h>
#include "DVD.c"
#include "Map.c"

// Function ran on startup

void main(){

// Est Vars

  UINT8 moveX = 1;
  UINT8 moveY = 1;
  UINT8 currentX = 0;
  UINT8 currentY = 0;
  UBYTE width = 40;
  UBYTE height = 18;

// Load background to VRAM

  set_bkg_data(0, 16, DVD);
  set_bkg_tiles(0, 0, 20, 18, Map);

  DISPLAY_ON;
  SHOW_SPRITES;
  SHOW_BKG;

// Load sprites to VRAM

  set_sprite_data(0, 16, DVD);

  set_sprite_tile(0, 0);
  set_sprite_tile(1, 1);
  set_sprite_tile(2, 2);
  set_sprite_tile(3, 3);
  set_sprite_tile(4, 4);
  set_sprite_tile(5, 5);
  set_sprite_tile(6, 6);
  set_sprite_tile(7, 7);
  set_sprite_tile(8, 8);
  set_sprite_tile(9, 9);
  set_sprite_tile(10, 10);
  set_sprite_tile(11, 11);
  set_sprite_tile(12, 12);
  set_sprite_tile(13, 13);
  set_sprite_tile(14, 14);

  move_sprite(0, 10-3, 30-14);
  move_sprite(1, 18-3, 30-14);
  move_sprite(2, 26-3, 30-14);
  move_sprite(3, 34-3, 30-14);
  move_sprite(4, 42-3, 30-14);
  move_sprite(5, 10-3, 38-14);
  move_sprite(6, 18-3, 38-14);
  move_sprite(7, 26-3, 38-14);
  move_sprite(8, 34-3, 38-14);
  move_sprite(9, 42-3, 38-14);
  move_sprite(10, 10-3, 46-14);
  move_sprite(11, 18-3, 46-14);
  move_sprite(12, 26-3, 46-14);
  move_sprite(13, 34-3, 46-14);
  move_sprite(14, 42-3, 46-14);

// Update function

  while(1){
    if(moveX==-1&&currentX==0){
      moveX=1;
    }
    if(moveY==-1&&currentY==0){
      moveY=1;
    }
    if(moveX==1&&currentX+width==160){
      moveX=-1;
    }
    if(moveY==1&&currentY+height==144){
      moveY=-1;
    }

// Move sprites

    scroll_sprite(0,moveX,moveY);
    scroll_sprite(1,moveX,moveY);
    scroll_sprite(2,moveX,moveY);
    scroll_sprite(3,moveX,moveY);
    scroll_sprite(4,moveX,moveY);
    scroll_sprite(5,moveX,moveY);
    scroll_sprite(6,moveX,moveY);
    scroll_sprite(7,moveX,moveY);
    scroll_sprite(8,moveX,moveY);
    scroll_sprite(9,moveX,moveY);
    scroll_sprite(10,moveX,moveY);
    scroll_sprite(11,moveX,moveY);
    scroll_sprite(12,moveX,moveY);
    scroll_sprite(13,moveX,moveY);
    scroll_sprite(14,moveX,moveY);
    currentX+=moveX;
    currentY+=moveY;
    delay(40);
  }
}
