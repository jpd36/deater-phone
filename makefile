CC = gcc
CFLAGS = -Wall -ansi
TARGET = deater
SRC = main.c func.c
OBJS = main.o func.o
$(TARGET): $(OBJS)
	$(CC) -o $(TARGET) $(OBJS)
main.o: main.c func.c func.h
	$(CC) $(CFLAGS) -c main.c
func.o: func.c func.h
	$(CC) $(CFLAGS) -c func.c
clean:
	/bin/rm -f *.o $(TARGET)
