#OBJS specifies which files to compile as part of the project
OBJS = *.c

#CC specifies which compiler we're using
CC = gcc

#OBJ_NAME specifies the name of our exectuable
OBJ_NAME = programa

all: compile run

compile : $(OBJS)
	$(CC) $(OBJS) -o $(OBJ_NAME)

run : $(OBJS)
	./$(OBJ_NAME)


