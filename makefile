APPLICATION_NAME=Tratten.exe

SDL_LIB = -L/SDL/x86_64-w64-mingw32/lib -lSDL2main -lSDL2 -lSDL2_image
SDL_INCLUDE = -I/SDL/x86_64-w64-mingw32/include/SDL2

LIBS=-lmingw32 $(SDL_LIB)
FLAGS=-o 


FILES=Main.c Engine.c



all:
	gcc $(FLAGS) $(APPLICATION_NAME) $(SDL_INCLUDE) $(FILES)  $(LIBS)