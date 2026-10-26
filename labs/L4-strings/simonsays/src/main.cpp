/*
Kattis - Simon Says

Updated By: Ari Murillo
Date: 10/19/2026

Problem Statement: https://open.kattis.com/problems/simonsays
Algorithm steps:
1. Read N
2. Loop N times:
  i. Read a line
  ii. If the line starts with "Simon says",
    print the rest of the string. Note: print the leading space after says as well!
  iii. Otherwise, skip the line
*/

#include <iostream>
#include <string>
#include <cassert>
#include "util.hpp"

using namespace std;

int main(int argc, char *argv[])
{
  string ans = "", line = "";
  int N;
  cin >> N;
  cin.ignore(1000, '\n'); // #fixed#
  // FIXME4 : read and discard \n left behind
  while (N--)
  {
    // Note: i. string consists of phrase with spaces
    // ii. don't print an empty line if the line doesn't start with "Simon says"
    // FIXME5: read the whole line into line
     getline(cin, line, '\n'); // #fixed#
    // FIXME6: call answer function and store the returned value into ans
    ans = answer(line); // #fixed#
    if (ans == "")
      continue;
    // FIXME7: print ans
    cout << ans << endl; // #fixed# 
  }
}