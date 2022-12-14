#include <stdlib.h>
#include "tiffio.h"
#include "tiff.h"


int main(int argc, char* argv[])

{   uint32_t rows = atoi(argv[1]);
    int cols = atoi(argv[2]);
    u_int16_t imageData[rows][cols];
    for (int i=0; i<rows; i++){
        for (int j=0; j<cols; j++){
            imageData[i][j] = 65535;
        }
    }
    for (int i=0; i<rows; i++){
        imageData[i][i] = 0;
    }
    TIFF* tif = TIFFOpen("test.tif", "w");
    tdata_t buf;
    for (int row=0; row<rows; rows++) {
        TIFFWriteScanline(tif, buf, row, 65535);
    }
    TIFFClose(tif);
}
