#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN

#include <sstream>
#include <iostream>

#include <doctest.h>
#include "../includes/tictactoe.hpp" // FIXME - Adjust the path as needed

TEST_CASE("Test init boad")
{
    char board[ROWS][COLS];
    tictactoe::init_board(board);
    SUBCASE("Test all spaces are initialized to ' '")
    {
        for (unsigned short i = 0; i < 3; ++i)
        {
            for (unsigned short j = 0; j < 3; ++j)
            {
                CHECK(board[i][j] == ' ');
            }
        }
    }
}

TEST_CASE("Test place mark")
{
    char board[ROWS][COLS];
    tictactoe::init_board(board);
    SUBCASE("Test placing mark on empty space")
    {
        CHECK(tictactoe::place_mark(board, 0, 0, 'X') == true);
        CHECK(tictactoe::place_mark(board, 1, 1, 'O') == true);
        CHECK(board[0][0] == 'X');
        CHECK(board[1][1] == 'O');
    }
    SUBCASE("Test placing mark on occupied space")
    {
        CHECK(tictactoe::place_mark(board, 0, 0, 'X') == true);
        CHECK(board[0][0] == 'X');
        CHECK(tictactoe::place_mark(board, 0, 0, 'O') == false); // Already occupied
        CHECK(board[0][0] == 'X');                               // Should still be 'X'
    }
}

TEST_CASE("Test check winner")
{
    char board[ROWS][COLS];
    tictactoe::init_board(board);
    SUBCASE("No winner")
    {
        CHECK(tictactoe::check_winner(board, 'X') == false);
        CHECK(tictactoe::check_winner(board, 'O') == false);
    }

    SUBCASE("Test horizontal win")
    {
        board[0][0] = 'X';
        board[0][1] = 'X';
        board[0][2] = 'X';
        CHECK(tictactoe::check_winner(board, 'X') == true);
    }

    // FIXME: Add SUB CASES for vertical and two-diagonal wins #fixed#
    SUBCASE("Test vertical win")
    {
        board[0][1] = 'O';
        board[1][1] = 'O';
        board[2][1] = 'O';
        CHECK(tictactoe::check_winner(board, 'O') == true);
    }

    SUBCASE("Test top-left to bottom-right diagonal win")
    {
        board[0][0] = 'X';
        board[1][1] = 'X';
        board[2][2] = 'X';
        CHECK(tictactoe::check_winner(board, 'X') == true);
    }

    SUBCASE("Test top-right to bottom-left diagonal win")
    {
        board[0][2] = 'O';
        board[1][1] = 'O';
        board[2][0] = 'O';
        CHECK(tictactoe::check_winner(board, 'O') == true);
    }
}

TEST_CASE("Test check draw")
{
    char board[ROWS][COLS];
    tictactoe::init_board(board);
    SUBCASE("Not a draw - empty spaces")
    {
        CHECK(tictactoe::check_draw(board) == false);
    }
    SUBCASE("Not a draw - winner exists")
    {
        board[0][0] = 'X';
        board[0][1] = 'X';
        board[0][2] = 'X';
        CHECK(tictactoe::check_draw(board) == false);
    }
    // FIXME: Add SUB CASE for draw condition (full board with no winner) #fixed#
    SUBCASE("Draw - full board, no winner")
    {
        board[0][0] = 'X';
        board[0][1] = 'O';
        board[0][2] = 'X';
        board[1][0] = 'X';
        board[1][1] = 'O';
        board[1][2] = 'O';
        board[2][0] = 'O';
        board[2][1] = 'X';
        board[2][2] = 'X';
        CHECK(tictactoe::check_draw(board) == true);
    }
}
// FIXME: Add test case for switch player function  #fixed#
TEST_CASE("Test switch player")
{
    char player = 'X';
    tictactoe::switch_player(player);
    CHECK(player == 'O');
    tictactoe::switch_player(player);
    CHECK(player == 'X');
}

// FIXME: Add test case for computer move function  #fixed#
TEST_CASE("Test computer move")
{
    char board[ROWS][COLS];
    tictactoe::init_board(board);
    CHECK(tictactoe::computer_move(board, 'O') == true);
    CHECK(board[0][0] == 'O');
}

// FIXME: Add test case for clear board function  #fixed#
TEST_CASE("Test clear board")
{
    char board[ROWS][COLS];
    tictactoe::init_board(board);
    board[1][1] = 'X';
    tictactoe::clear_board(board);
    CHECK(board[1][1] == ' ');
}