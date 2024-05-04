<b>University of California, Berkeley</b>
<b>Chem 274B: Software Engineering Fundamentals for Molecular Sciences</b>
<b>November 2023</b>

<u>Created by:</u> Giovanni Alteri, Dylan Do, Yara Khoury<br>
<u>Modified by: </u> Dylan Do, Yara Khoury<br>
<u>Date of Created:</u> November 21, 2023 <br>
<u>Last updated: </u> December 15, 2023 <br>
<u>Directory Path: </u> Final_Project_CHEM274B/Include

<b>Description: <i>This subdirectory contains the API for the cellular automata setup. </i></b>

# Cellular Automata Class Declarations

## Overview
This directory contains the following header files: 

- myCellularAutomata.h: header file where `cellularAutomata` class is implemented in C++. 

## Features and Methods 

CA feautures: 

- Flexible grid dimensions for cellular automata.
- Support for multiple states of cells.
- Configurable neighborhood types and boundary conditions.
- Implementation of straight conditional rules and majority/parity rules.
- Ability to export the cellular automata grid to a CSV file.
- Method for counting the number of cells in each state.

Class methods: 

- cellularAutomata(): default constructor.
- setup_dimension(int, int, int): set up the dimensions of the grid.
- setup_cell_states(int): define the number of states for the cells.
- init_condition(int, double): set the initial condition of the grid.
- step(int, int, int): number of steps for the simulation.
- exportToCSV(const std::string&): export the current state of the grid to a CSV file for output.

Error Codes

- The cellularAutomata class methods can return custom error codes.


## Setup

In order to be able to use the `cellularAutomata` class in a given source file, include the header file at the top of your source code script:

' #include "cellularAutomata.h" '

## Requirements
Please ensure that your compiler supports C++11 or higher due to the usage of the C++ Standard Library.


# Updates:
- Giovanni's added updates to this directory:
    - updated myCellularAutomata.h
- Dylan's added updates to this directory:
    - updated myCellularAutomata.h
- Yara's added updates to this directory:
    - updated myCellularAutomata.h
