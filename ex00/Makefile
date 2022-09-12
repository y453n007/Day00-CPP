NAME = megaphone

CLANG = c++

FLAGS = -Wall -Wextra -Werror -std=c++98

FILES = megaphone.cpp

OFILES = $(FILES:.cpp=.o)

all : $(NAME)

$(NAME) : $(OFILES)
	${CLANG} $^ -o $@ ${FLAGS}

clean : 
	@rm -rf ${OFILES}

fclean : clean
	@rm -rf ${NAME}

re : fclean all

.PHONY : all clean fclean re