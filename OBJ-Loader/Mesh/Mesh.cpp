//
//  Mesh.cpp
//  OBJ-Loader
//
//  Created by Iwein Bau on 22/02/2019.
//  Copyright © 2019 Iwein Bau. All rights reserved.
//

#include "Mesh.hpp"

Mesh::Mesh(){};
Mesh::Mesh(std::string name,
           std::vector<Vect3> positions,
           std::vector<Vect3> normals,
           std::vector<Vect2> UVs,
           std::vector<unsigned int> indices):
            _name(name),
            _positions(positions),
            _normals(normals),
            _UVs(UVs),
            _indices(indices){};
