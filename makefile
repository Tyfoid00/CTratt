APPLICATION_NAME=Tratten.exe

SDL_LIB_DIR = -L./SDL/i686-w64-mingw32/lib
SDL_LIB_FLAGS = -lSDL2main -lSDL2 -lSDL2_image -lSDL2_ttf
SDL_INCLUDE = -I./SDL/i686-w64-mingw32/include/SDL2

LIBS= -lmingw32 $(SDL_LIB_FLAGS)
FLAGS= -Wall -o 


FILES=Main.c Engine.c



all:
	gcc $(FLAGS) $(APPLICATION_NAME) $(FILES) $(SDL_INCLUDE) $(SDL_LIB_DIR)  $(LIBS)
	