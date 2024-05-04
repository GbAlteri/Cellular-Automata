<b>University of California, Berkeley</b>
<b>Chem 274B: Software Engineering Fundamentals for Molecular Sciences</b>
<b>November 2023</b>

<u>Created by:</u> Giovanni Battista Alteri<br>
<u>Date of Created:</u> November 20, 2023 <br>
<u>Last updated: </u> December 15, 2023 <br>

Giovanni Battista Alteri, Dylan Do, Yara Khoury </br>
Chem 274B: Introduction to Software Engineering </br>
Final Project - Design and Implementation of A General Purpose Library for Basic
Cellular Automata Modeling </br>
Brief Summary of the CA Application, CA Modeling and Simulation </br>

Cancer Growth CA Application</br>

This repository contains the C++ implementation for a cellular automata model and one possible application of it: we decided to create a software to model how cancer cells will act/spread in a certain
area (i.e body area). There is no ‘set’ rate at which all cancer grows, some tend to grow
slowly, fast, or not much growth at all. This is because there are many types of cancer
cells (benign and malignant) and varying environmental factors may cause cancer cells
to grow or not grow at all. Our application will explore this phenomena with our Cellular
Automata application. In this model we will use our general purpose library to simulate
the cancer spread. We will study the effects of the cell states and the cancer spread.
The cancer tumor will be initialized in the cellular automata grid which will have 3 states:
healthy cells, affected cells from the tumor, and the cells that will die from the spread. To
test our application we will create different simulations under different probabilities to
compare. We will then plot these simulations, including the number of
healthy/affected/dead cells after a certain amount of steps.
This application will use our general purpose library found in
Include/myCellularAutomata.h. The actual implementation is found in Source and our
Application will use these in our Application directory. The plotting for the CA can be
found in the Utils directory. Our application will study the relationship between the
probability of a cell to develop cancer in a certain system vs the size of the system itself.
Given a certain starting probability P that a cell can become cancerous, and given a
certain area of the system (dimensions of a matrix of rows * columns), what is the
relative final number of cancer cells (cancer cells/total number of cells) that we get after
a number of steps? We will also observe after how many steps the entire system is
considered ‘dead’.
For our simulation, it allows us to explore with different probabilities (ranging from 0.001
to 0.99) and differing matrix sizes (from 10 rows/columns to 100 rows/columns). We
decided in our CA to use the von Neumann neighborhood, majority rule, and infinite
boundaries in order to simulate a real life cancer growth.

The directory structure is as follows:

LIST OF SUBDIRECTORIES IN THIS DIRECTORY:
- Bin/ : This subdirectory contains all the executable program (test program)
	
- Lib/ : This subdirectory contains all library object files (.a)
		
- Include/: This directory contains all the APIs in the form of  
        function prototypes stored in .h include files
		
- Source/ : This directory contains all the source code with the
        functionality implemented in C++ for the final project 

- Articles/ : Articles of reference

- Example/ : This directory contains all the source code for the application
        using the cellular automata library
		
- Tests/ : Test programs used to test the functionalities implemented in
	 the final project
		
- Utils/ : Contains all the source files that implement utilities
        like timing, random number generation, other performance metric tools. 

LIST OF FILES IN THIS DIRECTORY:
- README.md:(is this file) 
- FinalProject_Assessment.pdf


