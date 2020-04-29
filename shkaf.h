#ifndef SHKAF_H_INCLUDED
#define SHKAF_H_INCLUDED

#include "mebel.h"

class shkaf: public mebel{
    int shelf;
public:
    shkaf();
    shkaf(string const &name_, int const size_, string const &color_, string const &material_, int const shelf_);
    shkaf(const shkaf &p);

    bool SetShelf(int const shelf_);
    int GetShelf() const;

    void print() const;
    shkaf& operator = (shkaf const &p);
};

#endif
