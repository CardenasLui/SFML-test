#include "Grid.hpp"

Grid::Grid(int rows, int cols){
    this->rows =rows;
    this->cols =cols;

  for(int i=0;i<rows;i++){
    this->grid.push_back({});
    for(int j=0;j<cols;j++){
        this->grid[i].push_back(0);
    }
  }
}

void Grid::drawTo(RenderWindow(window)){
 for(int i=0;i<rows;i++){
    this->grid.push_back({});
      for(int j=0;j<cols;j++){
        
       }
    }
}