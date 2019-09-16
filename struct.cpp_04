#include <sculptor.h>
#include <iostream>
using namespace std;



Sculptor::Sculptor(int _nx, int _ny, int _nz)
{

    Voxel ***v = new Voxel**[_nx];
    for (int i = 0; i < _nz; ++i) {
      v[i] = new Voxel*[_ny];
      for (int j = 0; j < _ny; ++j)
        v[i][j] = new Voxel[_nz];
    }
}

Sculptor::~Sculptor(){

    for(int i=0;i<nz;i++){
        for(int j=0;j<ny;j++){
            delete v[i][j];
        }
    }
    for(int i=0;i<nz;i++){
        delete v[i];
    }
    delete v;
}

void Sculptor::setColor(float r, float g, float b, float alpha)
{
    this-> r = r;
    this-> g = g;
    this-> b = b;
    a = alpha;
}

void Sculptor::putVoxel(int x, int y, int z){
   if(x<=nx && y<=ny && z<=nz){
    v[x][y][z].r=r;
    v[x][y][z].g=g;
    v[x][y][z].b=b;
    v[x][y][z].a=a;
    v[x][y][z].isOn=true;
  }
   else{
       v[x][y][z].isOn=false;
   }
}

void Sculptor::cutVoxel(int x, int y, int z){


     v[x][y][z].isOn=false;
}
