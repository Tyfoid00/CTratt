APPLICATION_NAME=Tratten.exe
LIBS=-lmingw32 -lSDL2main -lSDL2 -lSDL2_image
FLAGS=-o
FILES=Main.c Engine.c

all:
	gcc $(FLAGS) $(APPLICATION_NAME) $(FILES)  $(LIBS)