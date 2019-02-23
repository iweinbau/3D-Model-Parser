//
//  Mesh.hpp
//  OBJ-Loader
//
//  Created by Iwein Bau on 21/02/2019.
//  Copyright © 2019 Iwein Bau. All rights reserved.
//

#ifndef Mesh_h
#define Mesh_h

#include <iostream>
#include <vector>

#include "../Utils/Vect2.hpp"
#include "../Utils/Vect3.hpp"

class Mesh {
public:
    // Constructor
    Mesh();
    Mesh(std::string name,
               std::vector<Vect3> positions,
               std::vector<Vect3> normals,
               std::vector<Vect2> UVs,
               std::vector<unsigned int> indices);

    // Destructor.
    ~Mesh(){
        
    }

private:
    std::string _name;
    std::vector<Vect3> _positions;
    std::vector<Vect3> _normals;
    std::vector<Vect2> _UVs;
    std::vector<unsigned int> _indices;
};
#endif /* Mesh_h */
