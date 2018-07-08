#include "rcsv.h"

int main(){
    RCSV csv("test.csv");
    int cols = csv.data[0].size();
    int rows = csv.data.size();
    for(int y=0; y<rows; y++){
        for(int x=0; x<cols; x++){
            std::cout << csv.data[y][x] << " ";
        }
        std::cout << std::endl;
    }
    return 0;
}
