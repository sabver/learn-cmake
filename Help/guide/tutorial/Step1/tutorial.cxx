// #include <stdio.h>  /* printf, fgets */
// #include <stdlib.h> /* atof */
// #include <math.h>   /* sin */
#include <string>
#include <iostream>
#include "TutorialConfig.h"

int main(int argc, char **argv)
{
    if (argc < 2)
    {
        // report version
        std::cout << argv[0] << " Version " << Tutorial_VERSION_MAJOR << "."
                  << Tutorial_VERSION_MINOR << std::endl;
        std::cout << "Usage: " << argv[0] << " number" << std::endl;
        return 1;
    }    
    // char buffer[256];
    // printf("Enter number: ");
    // fgets(buffer, 256, stdin);
    // double input = atof(buffer);
    // printf("square root of a number %f is %f", input, sqrt(input));
    const double inputValue = std::stod(argv[1]);
    printf("square root of a number %f is %f", inputValue, sqrt(inputValue));
}