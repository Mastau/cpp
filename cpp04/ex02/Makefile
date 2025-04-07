NAME = abstract
CXX = c++
CXXFLAGS = -Werror -Wall -Wextra -g -std=c++98
DIROBJS = .objs
OBJS = $(SRCS:%.cpp=$(DIROBJS)/%.o)
SRCS = main.cpp \
	   AAnimal.cpp \
	   WrongAnimal.cpp \
	   Dog.cpp \
	   Cat.cpp \
	   WrongCat.cpp \
	   Brain.cpp \

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $@
$(DIROBJS)/%.o: %.cpp
	@mkdir -p $(@D)
	$(CXX) $(CXXFLAGS) $< -c -o $@
clean:
	@rm -rf $(DIROBJS)
fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: clean all re fclean
