#ifndef MEBEL_H_INCLUDED
#define MEBEL_H_INCLUDED

#include "izdelie.h"

class mebel: public izdelie{
protected:
    string material;
public:
    mebel();
    mebel(string const &name_, int const size_, string const &color_, string const &material_);

    void SetMaterial(string const &material_);
    const string& GetMaterial() const;

    virtual void print()const = 0;
    mebel& operator = (mebel const &p);
};

#endif
