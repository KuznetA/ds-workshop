#include <iostream>
#include <fstream>
#include <cassert>
#include <vector>
#include <string>
#include <iomanip>
#include <cmath>
#include <cstdlib>


int main(int argc, char *argv[]){
    
    for(int i = 1; i < argc; i++) {
        int silly = (int)*argv[i] * 2;
        std::cout << silly << std::endl;
    }
}
