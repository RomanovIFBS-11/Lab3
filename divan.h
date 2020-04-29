#ifndef DIVAN_H_INCLUDED
#define DIVAN_H_INCLUDED

#include "mebel.h"

class divan: public mebel{
    string pokritie;
public:
    divan();
    divan(string const &name_, int const size_, string const &color_, string const &material_, string const &pokritie_);
    divan(const divan &p);

    bool SetPokritie(int pokritie_);
    const string& GetPokritie() const;

    void print() const;
    divan& operator = (divan const &p);
};

#endif
