# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: joyim <joyim@student.42kl.edu.my>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/27 10:45:14 by joyim             #+#    #+#              #
#    Updated: 2024/09/27 10:45:21 by joyim            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

LIBFT = libft/libft.a

# Compiler and compiling flags
CC = cc
CCFLAGS = cc -Wall -Werror -Wextra

# Project name for the binaries
SERVER = server
CLIENT = client

SRCS_SERVER = server.c
SRCS_CLIENT = client.c

# Source files and object files
OBJS_SERVER = $(SRCS_SERVER:.c=.o)
OBJS_CLIENT = $(SRCS_CLIENT:.c=.o)


all: $(SERVER) $(CLIENT)

$(SERVER) $(CLIENT): $(OBJS_SERVER) $(OBJS_CLIENT) $(LIBFT)
		${CCFLAGS} ${OBJS_SERVER} libft/libft.a -o ${SERVER}
		${CCFLAGS} ${OBJS_CLIENT} libft/libft.a -o ${CLIENT}

$(LIBFT):
		${MAKE} -C ./libft

clean:	
		$(MAKE) clean -C ./libft
		rm -rf ${OBJS_SERVER} ${OBJS_CLIENT}

fclean:	clean
		$(MAKE) fclean -C ./libft
		rm -rf $(SERVER) $(CLIENT)

re:	fclean all
