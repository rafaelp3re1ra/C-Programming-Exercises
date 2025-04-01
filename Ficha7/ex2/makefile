CC=gcc
CFLAGS=-Wall -Wextra

TARGET=ex2
SRCS= main.c agenda.c
OBJS=$(SRCS:.c=.o)

$(TARGET): $(OBJS)
	$(CC) $(OBJS) -o $(TARGET)

%.o: %.c agenda.h
	$(CC) $(CFLAGS) -c $<

clean:
	rm -f $(OBJS) $(TARGET)

.PHONY: clean