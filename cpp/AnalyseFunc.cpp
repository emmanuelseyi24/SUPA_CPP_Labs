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


double funcp(int n, double sumxy, double sumx, double sumy, double sumxx){

return (((n*(sumxy)) - ((sumx)*(sumy))) / ((n*(sumxx))-((sumx)*(sumx)))) ;

}



double funcq(int n, double sumxy, double sumx, double sumy, double sumxx){

return (((sumxx * sumy) - (sumxy * sumx)) / ((n * sumxx) - (sumx * sumx)));

}
