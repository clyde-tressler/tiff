#include <stdio.h>
#include <stdlib.h>


int main(int argc, char* argv[])
{   int rows = atoi(argv[1]);
    int cols = atoi(argv[2]);
    u_int8_t imageData[rows][cols];
    for (int i=0; i<rows; i++){
        for (int j=0; j<cols; j++){
            imageData[i][j] = 255;
        }
    }
    for (int i=0; i<rows; i++){
        imageData[i][i] = 0;
    }

}
