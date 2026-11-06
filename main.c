/*
 * main.c
 * Demonstrates Player helper functions.
 * Your Name
 */

#include <stdio.h>
#include "player.h"

int main(void)
{
    struct Player p1;
    struct Player p2;
    struct Player p3;

    /* Create two players */
    init_player(&p1, "Alex Rivera", 7, 12);
    init_player(&p2, "Sam Ortiz", 14, 8);

    printf("Player 1:\n");
    print_player(&p1);

    printf("\nPlayer 2:\n");
    print_player(&p2);

    /* get_points and add_points */
    printf("\nPoints before -> %d\n", get_points(&p1));

    add_points(&p1, 3);

    printf("Points after  -> %d\n", get_points(&p1));

    printf("\nUpdated Player 1:\n");
    print_player(&p1);

    /* same jersey = true */
    init_player(&p3, "Jordan Lee", 7, 5);

    printf("\nSame jersey -> %d\n",
           same_jersey(&p1, &p3));

    /* same jersey = false */
    printf("Diff jersey -> %d\n",
           same_jersey(&p1, &p2));

    /* Safe NULL calls */
    printf("\nNULL points -> %d\n",
           get_points(NULL));

    print_player(NULL);   /* should do nothing */

    /* Optional array of players */
    struct Player team[3] = { p1, p2, p3 };

    printf("\nTeam Roster:\n");
    for (int i = 0; i < 3; i++) {
        printf("\nPlayer %d:\n", i + 1);
        print_player(&team[i]);
    }

    return 0;
}

