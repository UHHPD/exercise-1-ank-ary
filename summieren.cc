#include <fstream>
#include <iostream>
using namespace std;

int main(){
    ifstream fin("daten.txt");
    ofstream fout("datensumme.txt");

    int a,b;

    while (fin >> a >> b) {
        cout << a << " " << b << endl;
        fout << a+b << endl;
    }
}

