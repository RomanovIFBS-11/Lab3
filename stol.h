#ifndef STOL_H_INCLUDED
#define STOL_H_INCLUDED

#include "mebel.h"

class Table: public mebel{
    int kolsec;
public:
    Table();
    Table(string const &name_, int const size_, string const &color_, string const &material_);
    Table(const Table &p);

    void print() const;
    Table& operator = (Table const &p);
};

#endif
