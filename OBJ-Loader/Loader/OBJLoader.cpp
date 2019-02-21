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
#include <fstream>

//Constructor
MeshLoader::OBJLoader::OBJLoader():MeshLoader(){}
//Destructor
MeshLoader::OBJLoader::~OBJLoader(){};

//OBJ Loader object.
bool MeshLoader::OBJLoader::loadMesh (std::string filePath){
    // If the file is not an .obj file return false
    if (filePath.substr(filePath.size() - 4, 4) != ".obj"){
        std::cout << "No .obj file found at given file location: "<<filePath << std::endl;

    }
    //Do file loading.
    std::cout << "Parsing obj-file: "<<filePath << std::endl;
    
    //Open file stream
    std::ifstream file(filePath);
    
    //check if file is open.
    if (!file.is_open()){
        std::cout << "File was not opened!" << std::endl;
        return false;
    }
    
    //constuct mesh data.
    
    
    //the current line
    std::string currentLine;
    //loop over each line and parse the needed data.
    while(std::getline(file, currentLine)){
        //for now we just print the line
        std::cout << currentLine << std::endl;
    }
    
    //Load mesh data.
    
    //close stream
    //return new mesh.
    return true;
}
