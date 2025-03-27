NAME = replace
CC = c++
CXXFLAGS = -Werror -Wall -Wextra -g -std=c++98
DIROBJS = .objs
OBJS = $(SRCS:%.cpp=$(DIROBJS)/%.o)
SRCS = main.cpp \
	   sed.cpp \

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CXXFLAGS) $(OBJS) -o $@
$(DIROBJS)/%.o: %.cpp
	@mkdir -p $(@D)
	$(CC) $(CXXFLAGS) $< -c -o $@
clean:
	@rm -rf $(DIROBJS)
fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: clean all re fclean
