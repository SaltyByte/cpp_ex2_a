#ifndef EX_2_A_BOARD_HPP
#define EX_2_A_BOARD_HPP
#include <string>
#include "Direction.hpp"

namespace ariel {
    class Board{
        public:
            static std::string read(int row, int col, Direction direction, int length);
            static void post(int row, int col, Direction direction, const std::string &word);
            static void show();
    };
}


#endif
