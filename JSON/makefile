CC=gcc

# JSON_C_DIR=../lib/json-c/0.15
JSON_C_DIR=/usr/local
LDFLAGS += -L$(JSON_C_DIR)/lib -ljson-c -lzmq
CFLAGS += -I$(JSON_C_DIR)/include/json-c

all: main.c
	$(CC) -o main main.c $(LDFLAGS) $(CFLAGS)

clean:
	$(RM) *.o
