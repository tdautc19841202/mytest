#====================================================#
#  Makefile																	
#====================================================#

TARGET = test_memlib

CC = gcc
CXX = g++
LD = ld
AR = ar

CSRCS = $(wildcard *.c)
CPPSRCS = $(wildcard *.cpp)

OBJS = $(CSRCS:.c = .o)
OBJS += $(CPPSRCS:.cpp = .o)

INCLUDE = -I/xxx
LIBS = -L/xxx
CCPFLAGS = -g -Wall -O2

ifdef DEBUG_MEMORY
	CPPFLAGS += -DDEBUG_MEMORY
endif


$(TARGET) : $(OBJS)
	$(CXX) $^ -o $@ $(INCLUDES) $(LIBS)

%.o: %.c 
	$(CC) -c $(CPPFLAGS) -o $@ $< 

%.o: %.cxx
	$(CXX) -c $(CPPFLAGS) -o $@ $<

clean:
	rm *.o $(TARGET)

.PHONY:clean



