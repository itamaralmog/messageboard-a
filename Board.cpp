#include "Board.hpp"
#include "Direction.hpp"
#include <string>

using namespace std;

namespace ariel
{
    Point Point::bRightD(Point self)
    {
        Point p;
        return p;
    }
    Point Point::bLeftU(Point self)
    {
        Point p;
        return p;
    }
    string Board::read(uint x,uint y,Direction direction,uint size)
    {
        return string(" ");
    }

    void Board::post(uint x, uint y, Direction direction,std::string const str)
    {
    }
    
    void Board::show()
    {

    }

}