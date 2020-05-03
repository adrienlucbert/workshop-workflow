NAME	=	tests

SRCPATH	=	./
SRC		=	test.c				\
			../src/my_pow.c

OBJ		=	$(addprefix $(SRCPATH),$(SRC:.c=.o))
GCNO	=	$(addprefix $(SRCPATH),$(SRC:.c=.gcno))
GCDA	=	$(addprefix $(SRCPATH),$(SRC:.c=.gcda))

CFLAGS	=	-I../include --coverage
LFLAGS	=	-lcriterion -lgcov

all:	$(NAME)

$(NAME):	$(OBJ)
	$(CC) -o $(NAME) $(OBJ) $(LFLAGS)

clean:
	$(RM) $(OBJ)
	$(RM) $(GCNO)
	$(RM) $(GCDA)

fclean:	clean
	$(RM) $(NAME)

re:	fclean all

tests_run: all
	./$(NAME)

.DEBUG:	all clean fclean re tests_run