//
//  MeshLoader.c
//  OBJ-Loader
//
//  Created by Iwein Bau on 21/02/2019.
//  Copyright © 2019 Iwein Bau. All rights reserved.
//

#include "MeshLoader.hpp"
#include "../Mesh/Mesh.hpp"
#include <iostream>

//Constructor
MeshLoader::OBJLoader::OBJLoader():MeshLoader(){}
//Destructor
MeshLoader::OBJLoader::~OBJLoader(){};

//OBJ Loader object.
Mesh MeshLoader::OBJLoader::loadMesh (std::string filePath){
    // If the file is not an .obj file return false
    if (filePath.substr(filePath.size() - 4, 4) != ".obj"){
        throw "No .obj file found";
    }
    
    //Do file loading.
    std::cout << "Parsing obj-file: "<<filePath << std::endl;
    
    //Open file stream
    //constuct mesh data.
    
    
    //Load mesh data.
    
    //close stream
    //return new mesh.
    return Mesh();
}
