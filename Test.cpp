#include "doctest.h"
#include "Board.hpp"
#include "Direction.hpp"
using namespace ariel;

TEST_CASE("post and check crossing")
{
    Board * board = new Board();//+200,+100
    board->post(205,105,Direction::Vertical,"vscode");
    board->post(204,106,Direction::Horizontal,"eat");
    CHECK(board->read(206,105,Direction::Horizontal,1).compare("a")==0);
    CHECK(board->read(206,106,Direction::Horizontal,1).compare("t")==0);
    board->post(204,105,Direction::Vertical,"hat");
    CHECK(board->read(204,106,Direction::Vertical,1).compare("a")==0);
    CHECK(board->read(204,107,Direction::Vertical,1).compare("t")==0);
    board->post(203,104,Direction::Horizontal,"cat");
    CHECK(board->read(203,104,Direction::Horizontal,3).compare("cat")==0);
    board->post(203,109,Direction::Horizontal,"world");
    CHECK(board->read(203,109,Direction::Horizontal,5).compare("world")==0);
}
TEST_CASE("post 1 and than read")
{
    Board board;
    board.post(4,101,Direction::Vertical,"worldvscode");
    CHECK(board.read(4,101,Direction::Vertical,5).compare("world")==0);
    CHECK(board.read(4,106,Direction::Vertical,6).compare("vscode")==0);
    CHECK(board.read(4,101,Direction::Horizontal,11).compare("worldvscode")==0);
    CHECK(board.read(4,106,Direction::Vertical,2).compare("vs")==0);
    CHECK(board.read(4,108,Direction::Vertical,6).compare("code")==0);
    board.post(5,101,Direction::Vertical,"messageboard");
    CHECK(board.read(5,101,Direction::Vertical,5).compare("message")==0);
    CHECK(board.read(5,106,Direction::Vertical,6).compare("board")==0);
    CHECK(board.read(5,101,Direction::Horizontal,11).compare("messageboard")==0);
    CHECK(board.read(5,106,Direction::Vertical,2).compare("sag")==0);
    CHECK(board.read(5,108,Direction::Vertical,6).compare("mes")==0);
    board.post(6,101,Direction::Vertical,"itsnotfun");
    CHECK(board.read(5,101,Direction::Vertical,5).compare("itsfun")==0);
    CHECK(board.read(5,106,Direction::Vertical,6).compare("notfun")==0);
    CHECK(board.read(5,101,Direction::Horizontal,11).compare("itsnotfun")==0);
    CHECK(board.read(5,106,Direction::Vertical,2).compare("fun")==0);
    CHECK(board.read(5,108,Direction::Vertical,6).compare("its")==0);

}