#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;

int main() {
    ifstream fin("datensumme.txt");
    int a, N = 0;
    double x;
    while (fin >> a) {
        x += a;
        N++;
    }
    double xbar = x/N;

    double var;

    fin.clear();
    fin.seekg(0);

    while (fin >> a) {
        var += pow((a-xbar),2);
    }

    double V = var/N;
    double sigma = sqrt(V);

    cout << xbar << endl;
    cout << V << endl;
    cout << sigma << endl;
}
  