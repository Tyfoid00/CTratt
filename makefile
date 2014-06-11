APPLICATION_NAME=Tratten.exe
LIBS=-lmingw32 -lSDL2main -lSDL2
FLAGS=-o
FILES=Main.c

all:
	gcc $(FLAGS) $(APPLICATION_NAME) $(FILES)  $(LIBS)