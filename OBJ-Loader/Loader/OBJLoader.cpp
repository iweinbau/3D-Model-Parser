//
//  MeshLoader.c
//  OBJ-Loader
//
//  Created by Iwein Bau on 21/02/2019.
//  Copyright © 2019 Iwein Bau. All rights reserved.
//

#include <iostream>
#include <fstream>
#include <vector>

#include "MeshLoader.hpp"
#include "../Mesh/Mesh.hpp"
#include "../Utils/Vect3.hpp"
#include "../Utils/Algorithm.hpp"

namespace MeshLoader {
    //Constructor
    OBJLoader::OBJLoader():MeshLoader(){}
    //Destructor
    OBJLoader::~OBJLoader(){};
    
    //OBJ Loader object.
    bool OBJLoader::loadMesh (std::string filePath){
        // If the file is not an .obj file return false
        if (filePath.substr(filePath.size() - 4, 4) != ".obj"){
            std::cout << "No .obj file found at given file location: "<<filePath << std::endl;
            
        }
        //Open file stream
        std::ifstream file(filePath);
        
        //check if file is open.
        if (!file.is_open()){
            std::cout << "File was not opened!" << std::endl;
            return false;
        }
        
        //Do file loading.
        std::cout << "Parsing obj-file: "<<filePath << std::endl;
        
        
        //constuct mesh data.
        std::vector<Vect3> Positions;
        std::vector<Vect3> Normals;
        std::vector<unsigned int> Indices;

        

        
        //the current line
        std::string currentLine;
        //loop over each line and parse the needed data.
        while(std::getline(file, currentLine)){
            //for now we just print the line
            std::cout << currentLine << std::endl;
            
            //check if the line starts with v -> vertex.
            if(algorithm::startsWith(currentLine, "v ")){
                //construct new vertex position.
                std::vector<std::string> line_split = algorithm::split(currentLine,' ');
                
                float x = std::stof(line_split[1]);
                float y = std::stof(line_split[2]);
                float z = std::stof(line_split[3]);
                Vect3 pos = Vect3(x,y,z);
                Positions.push_back(pos);
            }
            
            //check if the line starts with v -> vertex.
            if(algorithm::startsWith(currentLine, "vn ")){
                //construct new vertex position.
                std::vector<std::string> line_split = algorithm::split(currentLine,' ');
                
                float x = std::stof(line_split[1]);
                float y = std::stof(line_split[2]);
                float z = std::stof(line_split[3]);
                Vect3 normal = Vect3(x,y,z);
                Normals.push_back(normal);
            }
        }
        
        //Load mesh data.
        
        //close stream
        //return new mesh.
        return true;
    }

}
