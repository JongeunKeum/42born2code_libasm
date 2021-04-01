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
ASRCS = ./asrcs/ft_read.s \
		./asrcs/ft_write.s \
		./asrcs/ft_strlen.s \
		./asrcs/ft_strcmp.s \
		./asrcs/ft_strcpy.s \
		./asrcs/ft_strdup.s
OBJS = $(ASRCS:.s=.o)

all : $(NAME)

$(NAME) : $(OBJS)
	$(AR) $(ARFLAGS) $@ $^
	ranlib $@

%.o : %.s
	$(ASM) $(ASFLAGS) -o $@ $^

test : all
	$(CC) $(CFLAGS) -o $(TEST) main.c -I$(INC) -L. -lasm
	./$(TEST)

clean :
	$(RM) $(OBJS)

fclean : clean
	$(RM) $(NAME) main.o $(TEST)

re : fclean all
