// Chem 274B: Software Engineering Fundamentals for
//            Molecular Sciences
// Creator: Giovanni Alteri, Dylan Do, Yara Khoury
// Modified by: Dylan Do
// Date Created: December 4, 2023
// Last revisited: December 6, 2023
//
//  Testing program for the C++ implementations of cellular automata setup

#include <iostream>
#include <utility>
#include "myCellularAutomata.h"

int main()
{

    cellularAutomata FirstAutomata; // create instance of cellularAutomata

    FirstAutomata.setup_dimension(2, 10, 10);                            // set up cellularAutomata dimensions for 2D
    int neighType = 2;                                                   // set up neighborhood type (2 for Moore neighborhood)
    int boundType = 1;                                                   // set up boundary type (1 for infinite space)
    int ruleType = 1;                                                    // setup rule_type
    FirstAutomata.setup_cell_states(3);                                  // setup 3 possible states for cell
    FirstAutomata.setup_neighborhood(0, 0, neighType);                   // setup neighborhood
    FirstAutomata.setup_boundtype(boundType, 0);                         // set boundary type
    FirstAutomata.init_condition_rewrite(FirstAutomata.unaffected, 0.5); // initialize cellular automata
                                                                         // w/ ceratin probablity for unaffected state
     // Count all states and export the grid to a CSV file
    std::cout << "Counting states and exporting to CSV..." << std::endl;
    FirstAutomata.countAllStates();
    FirstAutomata.exportToCSV("../Display/Data/Test3.csv");  

    std::cout << "Starting Configuration: " << std::endl;
    for (int i = 0; i < FirstAutomata.getHeight(); i++) // get current height
    {
        for (int j = 0; j < FirstAutomata.getWidth(); j++) // get current width
        {
            std::cout << FirstAutomata.getCurrentState()[i][j] << " "; // print current matrices state
        }
        std::cout << std::endl;
    }
     // Count all states and export the grid to a CSV file
    std::cout << "Counting states and exporting to CSV..." << std::endl;
    FirstAutomata.countAllStates();
    FirstAutomata.exportToCSV("../Display/Data/Test3.csv");  

    FirstAutomata.step(2, 10, neighType); // update cellular automata after 10 steps using majority rule

    std::cout << "Configuration After the first step: " << std::endl;
    for (int i = 0; i < FirstAutomata.getHeight(); i++)
    {
        for (int j = 0; j < FirstAutomata.getWidth(); j++)
        {
            std::cout << FirstAutomata.getCurrentState()[i][j] << " ";
        }
        std::cout << std::endl;
    }

     // Count all states and export the grid to a CSV file
    std::cout << "Counting states and exporting to CSV..." << std::endl;
    FirstAutomata.countAllStates();
    FirstAutomata.exportToCSV("../Display/Data/Test3.csv");  

    std::cout << std::endl;

    FirstAutomata.draw();

    return 0;
}