#ifndef INPUT_PARSE
#define INPUT_PARSE

#include <iostream>
#include <fstream>
#include <string>

#include <ImportAll_core.h>


int parseInputFile(std::string path_to_input)
{
    // try to read input file
    std::ifstream myFile(path_to_input);

    if (!myFile)
    {
        std::cerr << "Error: Failed to open input file!" << std::endl; 
        return 1;
    }

    std::cout << "Hello World!" << std::endl;

    return 0;
}

#endif // !INPUT_PARSE
