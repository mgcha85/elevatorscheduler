#include "schedulor.h"
#include <iostream>
using namespace std;


void Person::move(uint16_t _f1, uint16_t _f2)
{
    f1 = _f1;
    f2 = _f2;
}

void Person::set_id(uint16_t _id) {id = _id;}
void Elevator::set_id(uint16_t _id) {id = _id;}

void Schedulor::set_param(void) {
    for(int i=1; i<=m; i++) {
        elevator[i].set_id(i);
    }
    for(int i=1; i<=l; i++) {
        person[i].set_id(i);
    }
}

void Schedulor::set_destination(uint32_t _f1, uint32_t _f2) 
{
    f1 = _f1;
    f2 = _f2;
}

string Schedulor::get_destination(void) const
{
    cout << elevator[0].get_id() << ' ' << person[0].get_id() << endl;
}


int main()
{
    Schedulor sch = Schedulor(2, 1, 1, 2, 2);
    sch.set_param();
    sch.set_destination(1, 2);
}