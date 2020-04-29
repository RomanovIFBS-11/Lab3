#include "shkaf.h"

shkaf::shkaf(string const &name_, int const size_, string const &color_, string const &material_, int const shelf_):mebel(name_, size_, color_, material_){
    if(!SetShelf(shelf_))
    shelf = 0;
}

shkaf::shkaf(){
    shelf = 0;
}

shkaf::shkaf(const shkaf &p){
    name = p.name;
    size = p.size;
    color = p.color;
    material = p.material;
    shelf = p.shelf;
}

bool shkaf::SetShelf(int shelf_){
    if (shelf_ < 0)
    return false;
    else
    shelf = shelf_;
    return true;
}

int shkaf::GetShelf() const{
    return shelf;
}

void shkaf::print() const{
cout << "Name: " << name << endl;
cout << "Size: " << size << endl;
cout << "Color: " << color << endl;
cout << "Material: " << material << endl;
cout << "Shelf: " << shelf << endl;
}

shkaf& shkaf::operator = (shkaf const &p)
{
    mebel::operator=(p);
    this->shelf = p.shelf;
    return *this;
}
