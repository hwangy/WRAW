#include <stdio.h>
#include <SDL2/SDL.h>

#include "libraw/libraw.h"

SDL_Renderer* render;
SDL_Texture* texture;
SDL_Surface* surface;
uint32_t** display;

int main(int argc, char** argv) {
	SDL_Init(SDL_INIT_VIDEO | SDL_INIT_EVENTS);
	SDL_Surface *screen = SDL_SetVideoMode(600, 450, 32, SDL_SWSURFACE);



	return 0;
}
