# Chem 274B: Software Engineering Fundamentals for
#            Molecular Sciences 
# 
# Creators:  Dylan Do
# Date Created: December 13, 2023
# Date Updated: December 13, 2023
#
# This makefile make the target for the application

# GNU C++ Compiler
CPP         = g++      

# other compiler flags -g debug, -c create a library object
CPPFLAGS    = -O3 -o

# The directory where the include files needed to create the library objects are
INC_DIR = ../Include

# The directory where all object files are going to be moved after creation
LIB_DIR = ../Lib
BIN_DIR = ../Bin

# The next line contains the list of object files created by this Makefile.
EXECUTABLES = CancerCA

CancerCA:  $(INC_DIR)/myCellularAutomata.h
	$(CPP) $(CPPFLAGS) CancerCA CancerCA.cpp \
	-I$(INC_DIR) -L$(LIB_DIR) -lmyautomata
	mv CancerCA $(BIN_DIR)


all: $(EXECUTABLES)