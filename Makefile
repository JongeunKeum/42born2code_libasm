NAME = libasm.a

TEST = test

ASM = nasm
AS = as
ASFLAGS = -f macho64

CC = gcc
CFLAGS = -Wall -Wextra -Werror

AR = ar
ARFLAGS = rc

RM = rm -f

INC = ./includes 
SRCS = main.c
ASRCS = ft_read.s \
		ft_write.s \
	#	ft_strlen.s \
	#	ft_strcmp.s \
	#	ft_strcpy.s \
	#	ft_strdup.s
OBJS = $(ASRCS:.s=.o)

all : $(NAME)

$(NAME) : $(OBJS)
	$(AR) $(ARFLAGS) $@ $^
	ranlib $@

%.o : %.s
	$(ASM) $(ASFLAGS) -o $@ $^

test : all
	$(CC) $(CFLAGS) -o $(TEST) $(SRCS) -I$(INC) -L. -lasm
	./$(TEST)

clean :
	$(RM) $(OBJS)

fclean : clean
	$(RM) $(NAME) main.o $(TEST)

re : fclean all
