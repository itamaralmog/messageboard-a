#ifndef BOARD
#define BOARD
#include <string>
#include "Direction.hpp"
#include <array>

namespace ariel{
    typedef unsigned int uint;
    class Point
    {
    uint x,z;
    public:
        Point(uint x , uint z){
            this->x=x;
            this->z=z;
        }
        Point(){
           this->x=0;
           this->z=0; 
        }
        Point bRightD(Point self);
        Point bLeftU(Point self);
    }; 

   class Board{
       Point bRightD,bLeftU;
   public:
        Board()
            {
                
            }
        ~Board(){
       
        }
   std::string read(uint x,uint y,Direction direction,uint size);
   void post(uint x, uint y, Direction direction,std::string str);
   void show();
   };
}

#endif //BOARD
