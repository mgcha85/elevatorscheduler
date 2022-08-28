#include <iostream>
using namespace std;


/*
n: # floors
m: # elevator
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

enum Status{STOPPED, UPWARD, DOWNWARD, OPENED, NUM_STATUS};

class Person {
private:
    uint16_t id;
    uint16_t t;
    uint16_t f1;
    uint16_t f2;

public:
    Person(uint16_t _id)
    {
        id = _id;
        t = 0;
    }
    Person()
	{
        id = 0;
        t = 0;
	}
    void move(uint16_t _f1, uint16_t _f2);
    void set_id(uint16_t _id);
    uint16_t get_id(void) {return id;};
};


class Elevator {
private:
    uint16_t id;

public:
    Elevator(uint16_t _id)
    {
        id = _id;
    }
    Elevator()
	{
        id = 0;
	}
    void set_id(uint16_t _id);
    uint16_t get_id(void) {return id;};
};


class Schedulor {
private:
	uint32_t n;
	uint32_t m;
	uint16_t l;
	uint16_t x;
    uint16_t y;

    uint32_t f1;
    uint32_t f2;

    uint8_t status;
    Elevator* elevator;
    Person* person;


public:
	Schedulor(uint32_t _n, uint32_t _m, uint16_t _l, uint16_t _x, uint16_t _y)
    {
        n = _n;
        m = _m;
        l = _l;
        x = _x;
        y = _y;
        status = 0;
        elevator = new Elevator[m];
        person = new Person[l];
    }
    void set_param(void);
    void set_destination(uint32_t f1, uint32_t f2);
    string get_destination(void) const;
};
