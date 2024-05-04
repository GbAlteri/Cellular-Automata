// Chem 274B: Software Engineering Fundamentals for Molecular Sciences
// Creator: Dylan Do
// Modified by: Dylan Do
// Date Created: December 13, 2023
// Last revisited: December 13, 2023
//
//  app_prototype.cpp: C++ Application of the Cellular automata. The application will simulate a cancer growth and how it spreads across
//  a variety of dimensions/neighborhoods/boundaries with
//  a variety of rule spread.

#include "myCellularAutomata.h"
#include <iostream>


int main(void)
{
    // Cellular automata (Dimensions: 2D || Neighborhood: von Neumann || No boundaries || Straight Conditional Rule)
    cout << "Simulation of cells for Neighborhood: von Neumann || No boundaries || Straight Conditional Rule" << endl;
    int numStates = 3;     // setup number of cancer cell states(healthy, affected, dead)
    int numRows = 100;      // initial number of rows
    int numColumns = 100;   // initial number of columns
    int radius = 1;        // set radius for boundary effect
    int num_steps = 10;    // 10 steps after cellular automata has been set
    int dimensionType = 2; // setup dimension size
    int neighType = 1;     // set up neighborhood type (1 for von Neumann neighborhood) (2 for Moore)
    int boundType = 1;     // set up boundary type (1 for inifinite space) (2 for periodic)(*3 for fixed boundary)
    int ruleType = 1;      // setup rule_type (3 for straight conditional) (1 for majority) (4 for conditional transition rule)

    cellularAutomata cancerAutomata;                                        // instance of cellular automata
    cancerAutomata.setup_dimension(dimensionType, numRows, numColumns);     // set up cellularAutomata dimensions (2D, 20 rows & columns)
    cancerAutomata.setup_cell_states(numStates);                            // setup 3 possible states for cell
    cancerAutomata.setup_neighborhood(0, 0, neighType);                     // von Neumann neighborhood setup. initial row/column at (0,0)
    cancerAutomata.setup_boundtype(boundType, radius);                      // infinite boundaries
    cancerAutomata.change_state_cell(numRows/2, numColumns/2, 1);
    cancerAutomata.init_condition_rewrite(cancerAutomata.affected, 0.05); // initialize cellular automata
                                                                            // w/ ceratin probablity for unaffected state
    std::cout << "Counting states and exporting to CSV..." << std::endl;
    cancerAutomata.countAllStates();
    cancerAutomata.exportToCSV("../Display/Data/Application.csv");
    cout << "Initial Configuration of Cellular Automata: " << endl;
    cancerAutomata.draw();
    cout << endl;

    for (int step = 0; step < num_steps; step++){
        cancerAutomata.step(ruleType, step, neighType);
        std::cout << "Counting states and exporting to CSV..." << std::endl;
        cancerAutomata.countAllStates();
        cancerAutomata.exportToCSV("../Display/Data/Application.csv");
        cout << "Cellular Automata after steps: " << endl;
        cancerAutomata.draw();
        cout << endl;
    }


}
