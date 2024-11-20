# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yohurteb <yohurteb@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/29 15:21:51 by yohurteb          #+#    #+#              #
#    Updated: 2024/11/20 13:32:56 by yohurteb         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = a.out

SRC_DIR = .
OBJ_DIR = .obj

INCLUDE_DIR = include

SRCS = $(SRC_DIR)/main.cpp \
	   $(SRC_DIR)/Animal.cpp \
	   $(SRC_DIR)/Cat.cpp \
	   $(SRC_DIR)/Dog.cpp \
	   $(SRC_DIR)/WrongAnimal.cpp \
	   $(SRC_DIR)/WrongCat.cpp \
	   $(SRC_DIR)/Brain.cpp

OBJS = $(addprefix $(OBJ_DIR)/, $(notdir $(SRCS:.cpp=.o)))

CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98 -I$(INCLUDE_DIR)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp | $(OBJ_DIR)
	$(CXX) $(CXXFLAGS) -c $< -o $@

$(OBJ_DIR):
	mkdir -p $(OBJ_DIR)

clean:
	rm -rf $(OBJ_DIR)

fclean: clean
	rm -f $(NAME)

re: fclean $(NAME)

.PHONY: all clean fclean re
