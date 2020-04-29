#include "stol.h"

Table::Table(string const &name_, int const size_, string const &color_, string const &material_):mebel(name_, size_, color_, material_){
}

Table::Table(const Table &p){
    name = p.name;
    size = p.size;
    color = p.color;
    material = p.material;
}

void Table::print() const{
cout << "Name: " << name << endl;
cout << "Size: " << size << endl;
cout << "Colour: " << color << endl;
cout << "Material: " << material << endl;
}

Table& Table::operator = (Table const &p)
{
    mebel::operator=(p);
    this->kolsec =p.kolsec;
    return *this;
}
