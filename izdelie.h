#ifndef IZDELIE_H_INCLUDED
#define IZDELIE_H_INCLUDED

#include <iostream>
#include <string>

using namespace std;

class izdelie{
protected:
    string name;
    string color;
    int size;
public:
    izdelie();
    izdelie(string const &name_,int const size_,string const &color_);
    izdelie(const izdelie &p);

    void SetName(string const &name_);
    const string& GetName() const;
    bool SetSize(int size_);
    int GetSize() const;
    void SetColor(string color_);
    const string& GetColor() const;

    virtual void print()const = 0;

    izdelie& operator = (izdelie const &p);
};

#endif
