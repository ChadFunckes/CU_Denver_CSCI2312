# Various flags
COMPILE_FLAGS = -c -Wall
DEBUG_FLAGS = -g -pg

# Tools
CC = g++
RM = rm -f

# These are example object files that you might want to build
OBJS = main.o fishstock.o

# This is the name of your executable file
EXE = pa1

all: $(OBJS)
	$(CC) $(DEBUG_FLAGS) -o $(EXE) $(OBJS)

clean:
	$(RM) $(EXE) $(OBJS)

.cpp.o: $<
	$(CC) $(COMPILE_FLAGS) $(DEBUG_FLAGS) -o $@ $<
