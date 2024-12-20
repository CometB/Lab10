#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>
#include <math.h>

using namespace std;

int main(){
    ifstream source;
    source.open("score.txt");
    
    string data;
    int n = 0;
    double mean = 0, sd = 0;
    
    while(getline(source, data)){
        double d = stod(data);
        mean += d;
        sd += (d*d);
        n++;
    }
    source.close();
    
    mean /= n;
    sd = sqrt(sd/n - mean*mean);
    
    
    cout << "Number of data = " << n << '\n';
    cout << setprecision(3);
    cout << "Mean = " << mean << '\n'; 
    cout << "Standard deviation = " << sd << '\n';
}
