#ifndef equates_h
#define equates_h

#include <stdbool.h>
#include <graphx.h>
#include "classes/ships.h"
#include "classes/modules.h"
#include "rendering/screens.h"

#define xStart 10
#define yStart 14
#define vWidth 300
#define vHeight 170
#define MODICONS 14     // define first module icon



extern gfx_rletsprite_t* err_icon;


extern selected_t select;
extern uint16_t screen;

extern uint24_t ntwk_inactive_clock;

extern gfx_rletsprite_t* icon_netup;
extern gfx_rletsprite_t* icon_netdown;
extern gfx_rletsprite_t* log_error;
extern gfx_rletsprite_t* log_info;
extern gfx_rletsprite_t* log_debug;
extern gfx_rletsprite_t* log_server;

#endif
