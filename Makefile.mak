CC := gcc
TARGET := main
CFLAGS := -Wall -Wextra -pedantic -std=c11

SRCS := main.c \
        soma.c subtrai.c multiplica.c divisao.c \
        potencia.c  fatorial.c

OBJS := $(SRCS:.c=.o)

$(TARGET): $(OBJS)
	$(CC) $(OBJS) -o $(TARGET)

main.o: main.c soma.h subtrai.h multiplica.h divisao.h \
        potencia.h fatorial.h

soma.o: soma.c soma.h
subtrai.o: subtrai.c subtrai.h
multiplica.o: multiplica.c multiplica.h
divisao.o: divisao.c divisao.h
potencia.o: potencia.c potencia.h
fatorial.o: fatorial.c fatorial.h

.PHONY: clean run

run: $(TARGET)
	./$(TARGET)

clean:
	rm -f *.o $(TARGET)
