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
    objLoader.loadMesh("/Users/iweinbau/Projects/OBJ-Loader/OBJ-Loader/Objects/smooth_cube.obj");
    return 0;
}
