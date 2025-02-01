# Compiler
CC = gcc

# Compiler flags
CFLAGS = -fPIC -Wall -Wextra -O2

# Linker flags
LDFLAGS = -shared

# Target shared library name
TARGET = libherpderp.so

# Source files (all .c files in the current directory)
SRCS = $(wildcard *.c)

# Object files (generated from .c files)
OBJS = $(SRCS:.c=.o)

# Default target
all: $(TARGET)

# Rule to compile .c files into .o files
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Rule to link object files into a shared library
$(TARGET): $(OBJS)
	$(CC) $(LDFLAGS) -o $@ $(OBJS)
	cp $@ ../python_example/python_example/libs/
	cp herpderp.h ../python_example/python_example/include/

# Clean up build files
clean:
	rm -f $(OBJS) $(TARGET)

# Phony targets
.PHONY: all clean
