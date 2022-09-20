NAME = Account

CLANG = c++

#FLAGS = -Wall -Wextra -Werror -std=c++98

FILES = Account.cpp  tests.cpp

OFILES = $(FILES:.cpp=.o)

all : $(NAME)

$(NAME) : $(OFILES) 
	${CLANG} $^ -o $@ 

%.o : %.cpp  Account.hpp
	$(CLANG)  -o $@ -c $<

clean : 
	@rm -rf ${OFILES}

fclean : clean
	@rm -rf ${NAME}

re : fclean all

.PHONY : all clean fclean re