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
        Mesh getLoadedMesh(){
            return _mesh;
        }
        virtual bool loadMesh(std::string filePath) = 0;
    private:
        Mesh _mesh;
    };
    
    class OBJLoader: public MeshLoader{
    public:
        OBJLoader();
        ~OBJLoader();
        bool loadMesh(std::string filePath);
    };
}
#endif /* MeshLoader_h */
