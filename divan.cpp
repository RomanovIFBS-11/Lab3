#include "divan.h"

divan::divan(string const &name_, int const size_, string const &color_, string const &material_, string const &pokritie_):mebel(name_, size_, color_, material_){
    pokritie = pokritie_;
}

divan::divan(const divan &p){
    name = p.name;
    size = p.size;
    color = p.color;
    material = p.material;
    pokritie = p.pokritie;
}

const string& divan::GetPokritie() const{
    return pokritie;
}

void divan::print() const{
cout << "Name: " << name << endl;
cout << "Size: " << size << endl;
cout << "Color: " << color << endl;
cout << "Material: " << material << endl;
cout << "Pokritie: " << pokritie << endl;
}

divan& divan::operator = (divan const &p)
{
    mebel::operator=(p);
    this->pokritie = p.pokritie;
    return *this;
}
