# Chem 274B: Software Engineering Fundamentals for
#            Molecular Sciences 
# 
# Creators:  Giovanni Alteri, Dylan Do, Yara Khoury
# Date Created: November 21, 2023
# Date Updated: December 13, 2023
#
# This makefile make the targets for the testing files

CPP = g++
CPPFLAGS = -O3 -o
UINC_DIR = ../Utils/Include
INC_DIR = ../Include
LIB_DIR = ../Lib
ULIB_DIR = ../Utils/Lib
BIN_DIR = ../Bin
EXECUTABLES = test1 test2 test3 final_test

test1:  $(INC_DIR)/myCellularAutomata.h
	$(CPP) $(CPPFLAGS) test1 test1.cpp \
	-I$(INC_DIR) -L$(LIB_DIR) -lmyautomata
	mv test1 $(BIN_DIR)

test1_copy:  $(INC_DIR)/myCellularAutomata.h
	$(CPP) $(CPPFLAGS) test1_copy test1_copy.cpp \
	-I$(INC_DIR) -L$(LIB_DIR) -lmyautomata
	mv test1_copy $(BIN_DIR)

test2:  $(INC_DIR)/myCellularAutomata.h
	$(CPP) $(CPPFLAGS) test2 test2.cpp \
	-I$(INC_DIR) -L$(LIB_DIR) -lmyautomata
	mv test2 $(BIN_DIR)

test3:  $(INC_DIR)/myCellularAutomata.h
	$(CPP) $(CPPFLAGS) test3 test3.cpp \
	-I$(INC_DIR) -L$(LIB_DIR) -lmyautomata
	mv test3 $(BIN_DIR)

test_1:  $(INC_DIR)/myCellularAutomata.h
	$(CPP) $(CPPFLAGS) test3 test3.cpp \
	-I$(INC_DIR) -L$(LIB_DIR) -lmyautomata
	mv test3 $(BIN_DIR)
final_test:  $(INC_DIR)/myCellularAutomata.h
	$(CPP) $(CPPFLAGS) final_test final_test.cpp \
	-I$(INC_DIR) -L$(LIB_DIR) -lmyautomata
	mv final_test $(BIN_DIR)


all: $(EXECUTABLES)
