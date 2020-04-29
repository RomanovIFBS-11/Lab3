#include "mebel.h"

mebel::mebel(string const &name_, int const size_, string const &color_, string const &material_):izdelie(name_, size_, color_){
	material = material_;
}

mebel::mebel()
{
	material = "";
}

void mebel::SetMaterial(string const &material_)
{
    material = material_;
}

const string& mebel::GetMaterial() const{
    return material;
}

mebel& mebel::operator = (mebel const &p)
{
    izdelie::operator=(p);
    this->material = p.material;
    return *this;
}
