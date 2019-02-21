//
//  MeshLoader.hpp
//  OBJ-Loader
//
//  Created by Iwein Bau on 21/02/2019.
//  Copyright © 2019 Iwein Bau. All rights reserved.
//

#ifndef MeshLoader_h
#define MeshLoader_h

#include "../Mesh/Mesh.hpp"
#include <iostream>

namespace MeshLoader {
    class MeshLoader {
    public:
        MeshLoader(){};
        ~MeshLoader(){};
        virtual Mesh loadMesh(std::string filePath) = 0;
    };
    
    class OBJLoader: public MeshLoader{
    public:
        OBJLoader();
        ~OBJLoader();
        Mesh loadMesh(std::string filePath);
    };
}
#endif /* MeshLoader_h */
