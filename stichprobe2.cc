#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;

int main() {
    ifstream fin1("datensumme.txt");
    ifstream fin2("datensumme.txt");

    ofstream fout_mittelwerte("mittelwerte.txt");
    ofstream fout_varianzen("varianzen.txt");


    int a;
    int b;
    int k = 9; // no. of values per set
    int l = 26; // no. of sets

    double xbarbar, vbar;

    for (int j=0; j<l; j++){
        int N = 0;
        double x = 0;

        for (int i = 0+j*k; i < 9+j*k; i++) {
            fin1 >> a; 
            x += a;
            N++;

        }
        
        double xbar = x/N;

        xbarbar += xbar;

        fout_mittelwerte << xbar << endl;
        
        double var = 0;

        for (int i = 0+j*k; i < 9+j*k; i++) {
            fin2 >> b; 

            var += pow((b-xbar),2);


        }

        double V = var/(N-1);
        vbar += V;
        fout_varianzen << V << endl;

    }

    cout << xbarbar/l << " and " << (vbar/l) << endl;
}
  