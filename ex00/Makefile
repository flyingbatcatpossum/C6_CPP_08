# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kleung-t <kleung-t@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/02/13 17:13:55 by kleung-t          #+#    #+#              #
#    Updated: 2026/02/13 17:13:55 by kleung-t         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#_____ ELEMENTS

NAME = easyfind

GG = c++

GFLAGS = -Wall -Wextra -Werror -std=c++98

SRC =	main.cpp easyfind.cpp

RST = \33[0m#reset to default
R = \33[1;31m#red
G = \33[1;32m#green
B = \33[3;34m#blue
Y = \33[3;33m#yellow
M = \33[3;35m#magenta
C = \33[3;36m#cyan
W = \33[1;37m#white

#_____ CMD

all : $(NAME)

$(NAME) : $(SRC)
	@$(GG) $(GFLAGS) $(SRC) -o $(NAME)
	@echo "$(G)All files have been compiled, you can now use [./$(NAME)] ! ദി •⩊ • )$(RST)"

clean :
	@rm -f $(NAME).o && rm -f $(NAME).d
	@echo "$(Y)All additional files have been removed! (๑°ㅁ°๑)$(RST)"

fclean : clean
	@rm -f $(NAME)
	@echo "$(Y)All created files have been successfully removed! (๑°ㅁ°๑)$(RST)"

re : fclean all
	@echo "$(G)All files have successfully been recompiled! ദി •⩊ • )$(RST)"

.Phony : all clean fclean re