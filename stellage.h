#ifndef STELLAGE_H_INCLUDED
#define STELLAGE_H_INCLUDED

#include "mebel.h"

class stellage: public mebel{
    int sections;
public:
    stellage();
    stellage(string const &name_, int const size_, string const &color_, string const &material_, int const sections_);
    stellage(const stellage &p);

    bool SetSections(int sections_);
    int GetSections() const;

    void print() const;
    stellage& operator = (stellage const &p);
};

#endif
