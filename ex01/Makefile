NAME = phonebook

CLANG = c++

FLAGS = -Wall -Wextra -Werror -std=c++98

FILES = main.cpp Contact.cpp  add.cpp search.cpp

OFILES = $(FILES:.cpp=.o)

LIBS = Contact.hpp  PhoneBook.hpp

all : $(NAME)

$(NAME) : $(OFILES)
	${CLANG} $^ -o $@ ${FLAGS}

%.o : %.cpp $(LIBS)
	$(CLANG) $(FLAGS) -o $@ -c $<

clean : 
	@rm -rf ${OFILES}

fclean : clean
	@rm -rf ${NAME}

re : fclean all

.PHONY : all clean fclean re