##
## EPITECH PROJECT, 2017
## makefile
## File description:
## makefile
##

NAME	= lem_in

CC	= gcc -g

RM	= rm -f

SRCS	=	./src/main.c			\
		./src/get_next_line.c		\
		./src/map_parsing.c		\
		./src/epur_content.c		\
		./src/print_lemin.c		\
		./src/path_finding.c		\
		./src/get_content_file.c	\
		./src/not_good_line.c		\
		./src/end_str.c			\
		./src/print_path.c		\
		./src/path_utils.c		\
		./src/path_check.c

OBJS	= $(SRCS:.c=.o)

CFLAGS = -I ./include/

CFLAGS += -W -Wall -Wextra

LIB	= -L ./lib/ -lmy

all: $(NAME)

$(NAME): $(OBJS)
	make -C ./lib/my/
	$(CC) $(OBJS) -o $(NAME) $(CFLAGS) $(LIB)

clean:
	make clean -C ./lib/my/
	$(RM) $(OBJS)

fclean: clean
	$(RM) ./lib/libmy.a
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
