//
//  main.cpp
//  OBJ-Loader
//
//  Created by Iwein Bau on 21/02/2019.
//  Copyright © 2019 Iwein Bau. All rights reserved.
//

#include <iostream>

#include "Loader/MeshLoader.hpp"

int main(int argc, const char * argv[]) {
    // insert code here...
    MeshLoader::OBJLoader objLoader;
    try {
        objLoader.loadMesh("./Testpath.obj");
    } catch (const char* msg) {
        std::cout << msg << std::endl;
        
    }
    return 0;
}
