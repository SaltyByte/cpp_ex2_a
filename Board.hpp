#ifndef EX_2_A_BOARD_HPP
#define EX_2_A_BOARD_HPP
#include <string>
#include "Direction.hpp"

namespace ariel {
    class Board{
        public:
            std::string read(int row, int col, Direction direction, int length);
            void post(int row, int col, Direction direction, std::string word);
            void show();
    };
}


#endif
