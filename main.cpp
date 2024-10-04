#include <iostream>
#include <fstream>
#include <cassert>
#include <vector>
#include <string>
#include <iomanip>
#include <cmath>
#include <cstdlib>


int main(int argc, char *argv[]){
    
    for(int i = argc-1; i > 0; i--)
        std::cout << argv[i] << std::endl;
}
