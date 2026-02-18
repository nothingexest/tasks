#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main (){
    srand(time(nullptr));

    float** arr = new float *[100];
    for (int i = 0; i < 100; ++i) {
        arr[i] = new float[200];
        for (int j = 0; j < 200; ++j) {
            arr[i][j] = static_cast<float>(rand()) / RAND_MAX * 2.0f - 1.0f;
        }
    }
    for (int i = 0; i < 100; ++i) {
        delete[] arr [i];
    }
    delete [] arr;

    return 0;
}