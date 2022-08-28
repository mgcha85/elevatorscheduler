#include <stdio.h>


/*
n: # floors
x: move between the floors
y: take to board to or alight from an elevator
z: # elevator boarding limit
l: # passengers in tower

Pk: kth passenger
sk: waiting for boarding
bk: boarding floor
dk: destination floor
minimum expected arrival time: sk + |dk - bk|x + 2y
wk: extra time
*/

