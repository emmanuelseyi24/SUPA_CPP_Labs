#include <iostream>
#include <cmath>
#include <fstream>
#include <string.h>
#include <vector>

using namespace std;

float funcmag(float x, float y){

return sqrt((x*x + y*y)) ;

}


float funcpow(float x, float y){

return pow(x,y) ;

}


double funcp(int i, double sumxy, double sumx, double sumy, double sumxx){

return (((i*(sumxy)) - ((sumx)*(sumy))) / ((i*(sumxx))-((sumx)*(sumx)))) ;

}



double funcq(int i, double sumxy, double sumx, double sumy, double sumxx){

return (((sumxx * sumy) - (sumxy * sumx)) / ((i * sumxx) - (sumx * sumx)));

}



double funchi(int i, float x, double sumx){

return ((x-(sumx/i)) * (x-(sumx/i)))/(sumx/i);

}






