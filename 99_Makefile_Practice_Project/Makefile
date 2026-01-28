# Defining Compilers and Flags
CC ?= gcc
CFLAGS := -Wall -Wextra -O2 -MMD -MP -Iinclude

# Declaring Variables
SRC_DIR := src
OBJ_DIR := build

SRCS:= $(wildcard $(SRC_DIR)/*.c)
#OBJS:= $(SRCS:$(SRC_DIR)/%.c=$(OBJ_DIR)/%.o)
OBJS = $(patsubst $(SRC_DIR)/%.c, $(OBJ_DIR)/%.o, $(SRCS))
#INCLUDE:= -Iinclude

all: app

app: $(OBJS)
	@echo "building target"
	$(CC) $(CFLAGS) $^ -o $@

#$(OBJS):$(SRCS)
$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
	mkdir -p $(OBJ_DIR)
	@echo "building object"
	$(CC) $(CFLAGS) -c $< -o $@

-include $(OBJS:.o=.d)

.PHONY= all clean

clean:
	rm -rf $(OBJ_DIR) app