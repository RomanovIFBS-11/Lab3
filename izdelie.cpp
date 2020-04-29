#include "izdelie.h"

izdelie::izdelie(string const &name_, int const size_, string const &color_){
    if (!SetSize(size_))
        size = 0;
        name = name_;
        color = color_;
}

izdelie::izdelie(){
    name = "";
    size = 0;
    color = "";
}

bool izdelie::SetSize(const int size_){
    if (size_ < 0)
    return false;
    else
    size = size_;
    return true;
}

const string& izdelie::GetName() const{
    return name;
}

int izdelie::GetSize() const{
    return size;
}

const string& izdelie::GetColor() const{
    return color;
}

izdelie& izdelie::operator = (izdelie const &p)
{
    this->name = p.name;
    this->color = p.color;
    this->size = p.size;
    return *this;
}
