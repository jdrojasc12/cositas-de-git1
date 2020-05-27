#include <iostream>
#include "funciones.h"

using namespace std;
    
int main(){
    double X[2] = {8.5, 20};
    float dt = 0.05;
    float t = 0.0;
    cout << 0 << "," << X[0] << endl;
    for (int i=0; X[0]>0; i++ ){
        double * P = rungekutta4(dt,t,X);
        cout << P[0] << " , "<< P[1] <<endl;
        X[0] = P[1];
        X[1] = P[2];
        t = P[0];
    }
    
} 