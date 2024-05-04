<b>University of California, Berkeley</b>
<b>Chem 274B: Software Engineering Fundamentals for Molecular Sciences</b>
<b>November 2023</b>

<u>Created by:</u> Giovanni Alteri, Dylan Do, Yara Khoury<br>
<u>Modified by: </u>Dylan Do, Yara Khoury<br>
<u>Date of Created:</u> November 21, 2023 <br>
<u>Last updated: </u> December 15, 2023 <br>
<u>Directory Path: </u> Final_Project_CHEM274B/Source

This directory contains source C++ implementations of the cellular automata

## prototype_2.cpp: Cellular Automata Prototype 2
### Overview
The cellularautomata.cpp file contains a C++ script of a general Cellular Automata (CA) simulator. It includes a cellularAutomata class that allows users to create CA models with customizable dimensions, neighborhood types, boundary conditions, cell states, and transition rules. </br>

### Features: 
- The CA created supports 1D and 2D cellular automata models.
- Implementation for both von Neumann and Moore neighborhoods.
- Three options for boundary conditions: infinite, periodic, and fixed.
- Multiple transition rules including majority, parity, and conditional rules.
- CA grid can be initialized with random states based on certain probability. 
- Export function to save the CA state to a CSV file.

### How to run: 
A makefile has been added to this directory (Source) to help comiple and run the CA prototype. 
The command 'make all' will run and compile the code. 

