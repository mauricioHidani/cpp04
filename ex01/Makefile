# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mhidani <mhidani@student.42sp.org.br>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/03/18 18:31:21 by mhidani           #+#    #+#              #
#    Updated: 2026/03/18 19:19:55 by mhidani          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= brain
SINCE		= 2026.03.18
AUTHOR		= mhidani
LOCAL		= 42SP
VERSION		= 1.0.0v

INC_DIR		= includes
SRC_DIR		= src
OBJ_DIR		= obj

FILES		= main.cpp Animal.cpp Dog.cpp Cat.cpp Brain.cpp
SRCS		= $(addprefix $(SRC_DIR)/, $(FILES))
OBJS		= $(addprefix $(OBJ_DIR)/, $(FILES:.cpp=.o))

CXX			= c++
CXXFLAGS	= -Wall -Wextra -Werror -std=c++98
CXXINCS		= -I$(INC_DIR)/

MKD			= mkdir
MKDFLAGS	= --parents
RM			= rm
RMFLAGS		= --force --recursive

all: banner $(NAME)

clean:
	@$(RM) $(RMFLAGS) $(OBJ_DIR)
	@echo "$(OBJ_DIR): is cleaned  🧹"

fclean: clean
	@$(RM) $(RMFLAGS) $(NAME)
	@echo "$(NAME): is cleaned  🧹"

re: fclean all

banner:
	@echo "🛸 $(LOCAL) - [CPP-04 Exercise 01]"
	@echo "I don’t want to set the world on fire $(VERSION)"
	@echo "$(AUTHOR) $(SINCE)"

$(NAME): $(OBJS)
	@$(CXX) $(CXXFLAGS) $(OBJS) $(CXXINCS) -o $@
	@echo "$(NAME): is done 🤙"

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp
	@$(MKD) $(MKDFLAGS) $(dir $@)
	@$(CXX) $(CXXFLAGS) $(CXXINCS) -c $< -o $@

.PHONY: clean fclean all re banner
