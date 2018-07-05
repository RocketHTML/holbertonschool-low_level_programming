# This is the makefile for my binary tree project
# It should help automate many of the common steps in compiling source code
# ENV variable MAIN_C must be set to name of program entry point source file
# Can edit the SRC variable and MAIN_C env variable before calling make
CC = gcc
MAIN = $(MAIN_C)
SRC = $(MAIN) 0-binary_tree_node.c binary_tree_print.c 1-binary_tree_insert_left.c
OBJ = $(SRC:.c=.o) *-main.o
HEADERS = binary_trees.h
NAME = main
RM = rm -f
CFLAGS = -Wall -Werror -Wextra -pedantic

$(NAME): $(OBJ)
	$(CC) -o $(NAME) $(OBJ)

$(OBJ): $(HEADERS)

oclean:
	$(RM) $(OBJ)

fclean: oclean
	$(RM) $(NAME)
