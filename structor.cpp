#include <sculptorh.h>
#include <iostream>
using namespace std;



Sculptor::Sculptor(int _nx, int _ny, int _nz)
{

    Voxel ***arr = new Voxel**[_nx];
    for (int i = 0; i < _nz; ++i) {
      arr[i] = new Voxel*[_ny];
      for (int j = 0; j < _ny; ++j)
        arr[i][j] = new Voxel[_nz];
    }
}

Sculptor::~Sculptor()
{
    
}

void Sculptor::setColor(float r, float g, float b, float alpha)
{
    this-> r = r;
    this-> g = g;
    a = alpha;
}

void Sculptor::putVoxel(int x, int y, int z)
{

}

void Sculptor::cutVoxel(int x, int y, int z)
{

}
