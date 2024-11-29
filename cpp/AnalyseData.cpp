// Exercise I, written 29 - 11 - 2024
// ODUSINA EMMANUEL SEYI


#include <iostream>
#include <fstream>
#include <string.h>
#include <vector>
#include <cmath>
#include "AnalyseFunc.h"

using namespace std;

int main(){
string inputfile = "input2D_float.txt";
//string outputfile = "output2D_float.txt";

ifstream datainput;
//ofstream dataoutput;

datainput.open(inputfile);

fstream outputfile;
outputfile.open("dataout.txt", ios::out);

vector<float> datax, datay;

int n = 25;
float x, y, xy, xx, magn;
float sumx, sumy, sumxy, sumxx, p, q;

double pow;

if(!datainput.is_open()){

cout << "Cannot open " << inputfile << endl;
return -1;

}
else{
cout << " " << inputfile << " is opened " << endl;
}

for (int i = 0; i < 25; i++){

datainput >> x >> y;

datax.push_back(x);
datay.push_back(y);

magn = funcmag(x,y);
pow = funcpow(x,y);


cout << "The x and y values in line " << i+1 << " are " << x << " and " << y <<endl;

cout << " Magnitude of (x,y) is " << magn << "and x to power y (using inbuilt function for now) is " <<  pow <<endl;

outputfile << x << " \t " << y << endl;

xy = x*y;
xx =x*x;
sumxy += xy;
sumy+=y;
sumxx += xx;
sumx+=x;

p = ((n*(sumxy)) - ((sumx)*(sumy))) / ((n*(sumxx))-((sumx)*(sumx)));
q = ((sumxx * sumy) - (sumxy * sumx)) / ((n * sumxx) - (sumx * sumx));


cout << "The fit of the data has slope p = " << p << " and q = " << q << endl; 


}

datainput.close();
outputfile.close();








}





