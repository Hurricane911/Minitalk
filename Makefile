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
OBJS_SERVER_BONUS = $(SRCS_SERVER_BONUS:.c=.o)
OBJS_CLIENT_BONUS = $(SRCS_CLIENT_BONUS:.c=.o)


all: $(SERVER) $(CLIENT)

$(SERVER) $(CLIENT): $(OBJS_SERVER) $(OBJS_CLIENT) $(LIBFT)
		${CCFLAGS} ${OBJS_SERVER} libft/libft.a -o ${SERVER}
		${CCFLAGS} ${OBJS_CLIENT} libft/libft.a -o ${CLIENT}

$(LIBFT):
		${MAKE} -C ./libft

bonus: ${OBJS_SERVER_BONUS} ${OBJS_CLIENT_BONUS} ${LIBFT}
		${CCFLAGS} ${OBJS_SERVER_BONUS} libft/libft.a -o ${SERVER}
		${CCFLAGS} ${OBJS_CLIENT_BONUS} libft/libft.a -o ${CLIENT}

clean:	
		$(MAKE) clean -C ./libft
		rm -rf ${OBJS_SERVER} ${OBJS_CLIENT} ${OBJS_SERVER_BONUS} ${OBJS_CLIENT_BONUS}

fclean:	clean
		$(MAKE) fclean -C ./libft
		rm -rf $(SERVER) $(CLIENT)

re:	fclean all