NAME = phonebook
CC = c++
FLAGS = -Werror -Wall -Wextra -g -std=c++98
DIROBJS = .objs
OBJS = $(SRCS:%.cpp=$(DIROBJS)/%.o)
SRCS = phonebook.cpp \
	   contact.cpp \
	   main.cpp

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(FLAGS) $(OBJS) $(HEADER) -o $@
$(DIROBJS)/%.o: %.cpp
	@mkdir -p $(@D)
	$(CC) $(FLAGS) $(HEADER) $< -c -o $@
clean:
	@rm -rf $(DIROBJS)
fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: clean all re fclean
