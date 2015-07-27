#ifndef _SDL_PLATFORM_H__
#define _SDL_PLATFORM_H_

#ifdef __unix__
    #include <SDL2/SDL.h>
    #include <SDL2/SDL_image.h>
#elif _WIN32
    #include "SDL.h"
    #include "SDL_image.h"
    #include "SDL2_rotozoom.h"
#endif

#endif // _SDL_PLATFORM_H_

