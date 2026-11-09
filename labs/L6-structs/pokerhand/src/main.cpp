/*
Kattis Problem - Poker Hand - https://open.kattis.com/problems/pokerhand
Updated By: Ari Murillo
Date: 11/06/2026

Problem Statement: https://open.kattis.com/problems/pokerhand

Algorithm steps:
1. Design a struct to store 5 cards info
2. Read 5 cards into struct object
3. Find the maximum number of same rank cards in the hand
4. Print the maximum number of same rank cards
*/

#include <iostream>
#include "pokerhand.hpp"

using namespace std;

int main()
{
    pokerhand::Hand *h = new pokerhand::Hand;
    string card;
    for (size_t i = 0; i < 5; ++i)
    {
        cin >> card;
        h->cards[i].rank = card[0];
        // FIXME1 - read card's suit info into h's cards 
        h->cards[i].suit = card[1]; // #fixed#
    }
    // FIXME2 - find the maximum number of same rank cards in the hand and store it in h's max_same_rank field
     h->max_same_rank = pokerhand::find_max_same_rank(*h); // #fixed#
    cout << h->max_same_rank << endl;
    // FIXME3 - free memory allocated for h
    delete h; // #fixed#
    return 0;
}