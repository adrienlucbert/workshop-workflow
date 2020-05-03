NAME	=	workshop

SRCPATH	=	src/
SRC		=	main.c		\
			my_pow.c

OBJ		=	$(addprefix $(SRCPATH),$(SRC:.c=.o))

CFLAGS	=	-Iinclude
LFLAGS	=	
DEBUG	=	-g

all:	$(NAME)

$(NAME):	$(OBJ)
	$(CC) -o $(NAME) $(OBJ) $(LFLAGS)

clean:
	$(RM) $(OBJ)
	$(MAKE) clean -C tests

fclean:	clean
	$(RM) $(NAME)
	$(MAKE) fclean -C tests

re:	fclean all

debug:	CFLAGS += $(DEBUG)
debug:	all

tests_run:
	$(MAKE) tests_run -C tests

.DEBUG:	all clean fclean re debug tests_run