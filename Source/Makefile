# Chem 274B: Software Engineering Fundamentals for
#            Molecular Sciences 
# 
# Creators:  Giovanni Alteri, Dylan Do, Yara Khoury
# Date Created: November 21, 2023
# Date Updated: December 13, 2023
#
# This makefile make the targets for the testing files
CPP = g++
CPPFLAGS = -O3 -c -std=c++11
INC_DIR = ../Include
LIB_DIR = ../Lib
DATA_OBJS = cellularautomata.o 
DATA_LIB = libmyautomata.a

cellularautomata.o : $(INC_DIR)/myCellularAutomata.h
	$(CPP) $(CPPFLAGS) cellularautomata.cpp -I$(INC_DIR)

libmyautomata.a: $(DATA_OBJS)
	ar ru $(DATA_LIB) $(DATA_OBJS)
	mv $(DATA_LIB) $(LIB_DIR)
	rm $(DATA_OBJS)

all: $(DATA_LIB)

cleanall:
	cd $(LIB_DIR); rm $(DATA_LIB)