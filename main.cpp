#include <iostream>
#include <string>
#include "izdelie.h"
#include "mebel.h"
#include "shkaf.h"
#include "stellage.h"
#include "stol.h"
#include "divan.h"

using namespace std;

int main()
{
    string name_, color_, material_, pokritie_;
    int shelf_, size_, sections_, vybor;


    cout << "Enter 1, to enter data shkafa;" << endl;
    cout << "Enter 2, to enter data stellaga;" << endl;
    cout << "Enter 3, to enter data table;" << endl;
    cout << "Enter 4, to enter data divana;" << endl;


    cout <<"Enter: ";
    cin >> vybor;
    cout << endl;
    if ((vybor>=5)||(vybor<=0)){
    cout << "Enter chislo ot 1 do 5!"<< endl<<endl;

    }
    cout << endl;

    switch (vybor){
    case 1:{
    cout << "You vybor shkaf." << endl;
    cout << "Enter name shkafa: ";
    cin >> name_;
    cout << "Enter size shkafa: ";
    cin >> size_;
    cout << "Enter color shkafa: ";
    cin >> color_;
    cout << "Enter material shkafa: ";
    cin >> material_;
    cout << "Enter number of shelves shkafa: ";
    cin >> shelf_;
    cout << endl;

    shkaf s(name_, size_, color_, material_, shelf_);
    s.print();
    cout << endl;

     cout << "Enter 1, to enter data shkafa;" << endl;
    cout << "Enter 2, to enter data stellaga;" << endl;
    cout << "Enter 3, to enter data table;" << endl;
    cout << "Enter 4, to enter data divana;" << endl;

    cout <<"Enter: ";
    cin >> vybor;
    cout << endl;

}
    case 2:{
    cout << "You vybor stellage." << endl;
    cout << "Enter name stellaga: ";
    cin >> name_;
    cout << "Enter size stellaga: ";
    cin >> size_;
    cout << "Enter color stellaga: ";
    cin >> color_;
    cout << "Enter material stellaga: ";
    cin >> material_;
    cout << "Enter number of sections stellaga: ";
    cin >> sections_;
    cout << endl;

    stellage stel(name_, size_, color_, material_, sections_);
    stel.print();
    cout << endl;

     cout << "Enter 1, to enter data shkafa;" << endl;
    cout << "Enter 2, to enter data stellaga;" << endl;
    cout << "Enter 3, to enter data table;" << endl;
    cout << "Enter 4, to enter data divana;" << endl;


    cout <<"Enter: ";
    cin >> vybor;
    cout << endl;

}
    case 3:{
    cout << "You vybor table." << endl;
    cout << "Enter name table: ";
    cin >> name_;
    cout << "Enter size table: ";
    cin >> size_;
    cout << "Enter color table: ";
    cin >> color_;
    cout << "Enter material table: ";
    cin >> material_;
    cout << endl;

    Table st(name_, size_, color_, material_);
    st.print();
    cout << endl;

    cout << "Enter 1, to enter data shkafa;" << endl;
    cout << "Enter 2, to enter data stellaga;" << endl;
    cout << "Enter 3, to enter data table;" << endl;
    cout << "Enter 4, to enter data divana;" << endl;


    cout <<"Enter: ";
    cin >> vybor;
    cout << endl;

}
    case 4:{
    cout << "You vybor divan." << endl;
    cout << "Enter name divana: ";
    cin >> name_;
    cout << "Enter size divana: ";
    cin >> size_;
    cout << "Enter color divana: ";
    cin >> color_;
    cout << "Enter material divana: ";
    cin >> material_;
    cout << "Enter pokritie divana: ";
    cin >> pokritie_;
    cout << endl;

    divan div(name_, size_, color_, material_, pokritie_);
    div.print();
    cout << endl;


}
}
}
