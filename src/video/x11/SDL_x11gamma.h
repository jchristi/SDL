/*
    SDL - Simple DirectMedia Layer
    Copyright (C) 1997-2009 Sam Lantinga

    This library is free software; you can redistribute it and/or
    modify it under the terms of the GNU Lesser General Public
    License as published by the Free Software Foundation; either
    version 2.1 of the License, or (at your option) any later version.

    This library is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
    Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public
    License along with this library; if not, write to the Free Software
    Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA

    Sam Lantinga
    slouken@libsdl.org
*/
#include "SDL_config.h"

#ifndef _SDL_x11gamma_h
#define _SDL_x11gamma_h

extern Colormap X11_LookupColormap(Display * display, int scrNum,
                                   VisualID vid);
extern void X11_TrackColormap(Display * display, int scrNum,
                              Colormap colormap, XStandardColormap * cmap,
                              Visual * visual);

extern int X11_SetDisplayGammaRamp(_THIS, Uint16 * ramp);
extern int X11_GetDisplayGammaRamp(_THIS, Uint16 * ramp);

#endif
