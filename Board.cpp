#include <iostream>
#include "Board.hpp"


using std::cout;
using std::endl;
namespace ariel {
    std::string Board::read(int row, int col, Direction direction, int length){
        return "Hello There";
    }
    void Board::post(int row, int col, Direction direction, const std::string &word) {
        cout << "Hello There, In Post" << endl;
    }
    void Board::show(){
        cout << "Hello There, In Show" << endl;
    }
}