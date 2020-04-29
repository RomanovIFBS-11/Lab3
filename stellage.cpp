#include "stellage.h"

stellage::stellage(string const &name_, int const size_, string const &color_, string const &material_, int const sections_):mebel(name_, size_, color_, material_){
    if(!SetSections(sections_))
    sections = 0;
}

stellage::stellage(){
    sections = 0;
}

stellage::stellage(const stellage &p){
    name = p.name;
    size = p.size;
    color = p.color;
    material = p.material;
    sections = p.sections;
}

bool stellage::SetSections(int sections_){
    if (sections_ < 0)
    return false;
    else
    sections = sections_;
    return true;
}

int stellage::GetSections() const{
    return sections;
}

void stellage::print() const{
cout << "Name: " << name << endl;
cout << "Size: " << size << endl;
cout << "Color: " << color << endl;
cout << "Material: " << material << endl;
cout << "Number of sections: " << sections << endl;
}

stellage& stellage::operator = (stellage const &p)
{
    mebel::operator=(p);
    this->sections = p.sections;
    return *this;
}
