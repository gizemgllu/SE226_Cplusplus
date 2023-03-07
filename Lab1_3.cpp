#include <iostream>
using namespace std;

int main() {

    string name;
    int lab, mid, final;
    cout << "Enter first your name then lab grade, midterm grade and final grade respectively: : " << endl;
    cin >> name >> lab >>mid >> final;
    float lastScore= lab*0.25+ mid*0.35 + final*0.4;

    cout<<"Name: "<<name<<endl;
    cout<<"Lab: "<<lab<<endl;
    cout<<"Midterm: "<<mid<<endl;
    cout<<"Final: "<<final<<endl;
    cout<<"Last Score: "<< lastScore<<endl;


    return 0;
}