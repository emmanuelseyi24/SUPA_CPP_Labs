// Exercise I, written 26 - 11 - 2024

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

fstream outputfile_1;
fstream outputfile_2;
fstream outputfile_3;
fstream outputfile_4;

outputfile_1.open("dataout_1.txt", ios::out);
outputfile_2.open("dataout_2.txt", ios::out);
outputfile_3.open("dataout_3.txt", ios::out);
outputfile_4.open("dataout_4.txt", ios::out);

vector<float> datax, datay;

int n = 10;
float x, y, xy, xx, magn;

double sumx, sumy, sumxy, sumxx;

double p, q;

double pow, chi;

if(!datainput.is_open()){

cout << "Cannot open " << inputfile << endl;
return -1;

}
else{
cout << " " << inputfile << " is opened " << endl;
}

cout << "How many number of points do you want to calculate from the data?" << endl;
cin >> n ;

for (int i = 0; i <= n-1; i++){

if(datainput.eof()) break;

//n=i+1;

datainput >> x >> y;

datax.push_back(x);
datay.push_back(y);

magn = funcmag(x,y);
pow = funcpow(x,y);

cout << "The x and y values in line " << i+1 << " are " << x << " and " << y <<endl;

cout << "  Its magnitude is " << magn << " and x to power y is " <<  pow <<endl;

xy = x*y;
xx =x*x;
sumxy += xy;
sumy+=y;
sumxx += xx;
sumx+=x;

p = funcp(i+1,sumxy,sumx,sumy,sumxx);
q = funcq(i+1,sumxy,sumx,sumy,sumxx);
chi+=funchi(i+1,x,sumx);

//cout << " n =  " <<  i+1  <<  " p =  " <<  p << " q = " << q << " Chi = " << chi <<endl;

cout << "    " << endl;
outputfile_1 << x << " \t " << y << endl;

outputfile_2 << magn << endl;

outputfile_3 << p << " " << q << " " << chi <<endl;

outputfile_4 << pow << endl;

}

datainput.close();
outputfile_1.close();
outputfile_2.close();
outputfile_3.close();
outputfile_4.close();



}





