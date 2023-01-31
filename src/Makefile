# Note: mostly Windows-focused. Can add Mac/Linux support as necessary

OBJS = main.o
INCLUDES = # fill in as necessary
LIBS = # fill in as necessary
LDFLAGS = # fill in as necessary
CFLAGS = -Wall -Wpedantic 
PROGRAM = main
COMPILER = g++

.PHONY: all clean

all: $(PROGRAM)

$(PROGRAM): clean $(OBJS)
	$(COMPILER) -o $(PROGRAM) $(OBJS) $(LIBS) $(LDFLAGS)

%.o: %.cpp
	$(COMPILER) $(INCLUDES) $(CFLAGS) -c $<
	
RM = rm	-f
ifeq ($(OS),Windows_NT)     # is Windows_NT on XP, 2000, 7, Vista, 10...
    RM := del
endif

clean: 
	$(RM) $(OBJS) $(PROGRAM)