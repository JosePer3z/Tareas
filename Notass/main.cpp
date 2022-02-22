#include <iostream>

using namespace std;

int main()
{
    int c1, c2, c3, c4;
    string cr1, cr2, cr3, cr4;
    cout << endl;
    cout << "Evaluacion de cursos" << endl;
    cout << endl;
    cout << "Ingrese el nombre del primer curso: "<< endl;
    cin >> cr1;
    cout << "Ingrese el nombre del segundo curso: "<< endl;
    cin >> cr2;
    cout << "Ingrese el nombre del tercer curso: "<< endl;
    cin >> cr3;
    cout << "Ingrese el nombre del cuarto curso: "<< endl;
    cin >> cr4;
    cout << endl;
    cout << "ingrese la nota de " << cr1 << ": ";
    cin >> c1;
    cout << "ingrese la nota de " << cr2 << ": ";
    cin >> c2;
    cout << "ingrese la nota de " << cr3 << ": ";
    cin >> c3;
    cout << "ingrese la nota de " << cr4 << ": ";
    cin >> c4;
    cout << endl;
    cout << " ======Evaluando====== " << cr1 << endl;
    if (c1>=80){cout << "    Felicidades" << endl;}
    else if (c1>=61){cout <<  " ~Puede mejorar~ " << endl;}
    else if (c1==60){cout << "  Casi llegas" << endl;}
    else{cout << "     创Perdio创"<< endl;}
    cout << endl;
    cout << " ======Evaluando====== " << cr2 << endl;
    if (c2>=80){cout << "    Felicidades" << endl;}
    else if (c2>=61){cout <<  " ~Puede mejorar~ "<< endl;}
    else if (c2==60){cout <<"  Casi llegas"<< endl;}
    else{cout << "     创Perdio创" << endl;}
    cout << endl;
    cout << " ======Evaluando====== " << cr3 << endl;
    if (c3>=80){cout << "     Felicidades" << endl;}
    else if (c3>=61){cout <<  " ~Puede mejorar~ " << endl;}
    else if (c3==60){cout <<"  Casi llegas"<< endl;}
    else{cout << "     创Perdio创" << endl;}
    cout << endl;
    cout << " ======Evaluando====== " << cr4 << endl;
    if (c4>=80){cout << "     Felicidades" << endl;}
    else if (c4>=61){cout <<  " ~Puede mejorar~ " << endl;}
    else if (c4==60){cout << "     Casi lo logra" << endl;}
    else{cout <<"     创Perdio创" << endl;}
    cout << endl;
    }
