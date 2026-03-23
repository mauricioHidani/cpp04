# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mhidani <mhidani@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/03/23 16:28:55 by mhidani           #+#    #+#              #
#    Updated: 2026/03/23 19:59:55 by mhidani          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= interface
SINCE		= 2026.03.23
AUTHOR		= mhidani
LOCAL		= 42SP
VERSION		= 1.0.0v

INC_DIR		= includes
SRC_DIR		= src
OBJ_DIR		= obj

FILES		= main.cpp Materia.cpp MateriaSource.cpp Ice.cpp Cure.cpp \
			  Character.cpp
SRCS		= $(addprefix $(SRC_DIR)/, $(FILES))
OBJS		= $(addprefix $(OBJ_DIR)/, $(FILES:.cpp=.o))

CXX			= c++
CXXFLAGS	= -Wall -Wextra -Werror -std=c++98
CXXINCS		= -I$(INC_DIR)/

VALGRIND	= valgrind
VGDLOGFL	= valgrind_memory_check.log
VGDFLAGS	= --leak-check=full --track-origins=yes --show-leak-kinds=all \
			  --log-file=$(VGDLOGFL)

MKD			= mkdir
MKDFLAGS	= --parents
RM			= rm
RMFLAGS		= --force --recursive

define check_created
	if [ -f $(1) ]; then \
		echo "$(1): is created 🤙"; \
	else \
		echo "$(1): doesn't created 👎"; \
	fi
endef

all: banner $(NAME)

clean:
	@$(RM) $(RMFLAGS) $(OBJ_DIR)
	@echo "$(OBJ_DIR): is cleaned  🧹"

clean_logs:
	@$(RM) $(RMFLAGS) $(VGDLOGFL)
	@echo "logs is cleaned  🧹"

fclean: clean clean_logs
	@$(RM) $(RMFLAGS) $(NAME)
	@echo "$(NAME): is cleaned  🧹"

re: fclean all

banner:
	@echo "🛸 $(LOCAL) - [CPP-04 Exercise 03]"
	@echo "Interface & recap $(VERSION)"
	@echo "$(AUTHOR) $(SINCE)"

$(VALGRIND): banner $(NAME)
	@$@ $(VGDFLAGS) ./$(NAME)
	@$(call check_created, $(VGDLOGFL))

$(NAME): $(OBJS)
	@$(CXX) $(CXXFLAGS) $(OBJS) $(CXXINCS) -o $@
	@echo "$(NAME): is done 🤙"

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp
	@$(MKD) $(MKDFLAGS) $(dir $@)
	@$(CXX) $(CXXFLAGS) $(CXXINCS) -c $< -o $@

.PHONY: clean clean_logs fclean all re banner