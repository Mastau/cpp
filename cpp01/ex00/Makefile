NAME = brainz
CC = c++
FLAGS = -Werror -Wall -Wextra -g -std=c++98
DIROBJS = .objs
OBJS = $(SRCS:%.cpp=$(DIROBJS)/%.o)
SRCS = main.cpp \
	   Zombie.cpp \
	   newZombie.cpp\
	   randomChump.cpp \

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(FLAGS) $(OBJS) -o $@
$(DIROBJS)/%.o: %.cpp
	@mkdir -p $(@D)
	$(CC) $(FLAGS) $< -c -o $@
clean:
	@rm -rf $(DIROBJS)
fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: clean all re fclean
