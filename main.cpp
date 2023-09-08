/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

void createPointCloud(PointCloud& cloud) {
    cloud.begin = nullptr;
    cloud.size = 0u;
}

void deletePointCloud(PointCloud& cloud) {
    delete[] cloud.begin;
    cloud.begin = nullptr;
    cloud.size = 0u;
}

PointCloud mergePointClouds(const PointCloud& cloud1, const PointCloud& cloud2) {
    PointCloud mergedCloud;
    mergedCloud.size = cloud1.size + cloud2.size;
    mergedCloud.begin = new Point_3D[mergedCloud.size];


    for (unsigned i = 0u; i < cloud1.size; ++i) {
        mergedCloud.begin[i] = cloud1.begin[i];
    }

    for (unsigned i = 0u; i < cloud2.size; ++i) {
        mergedCloud.begin[cloud1.size + i] = cloud2.begin[i];
    }

    return mergedCloud;
}

int main()
{
    

    return 0;
}
