#include <iostream>
using namespace std;
class bad_area{};
int area(int length, int width);
{
	if ( length <=0 || width <=0) 
   throw Bad_area { } ;
return length*width ;
}
int main ( )
try
{
    int x =-1;
    int y = 2 ;
    int z = 4 ;
    int area1 = area( x , y ) ;
    int area2 = framed_area ( 1 , z ) ;
    int area3 = framed_area ( y , z ) ;
    double ratio = double ( area1 )/area3 ;
}
catch (Bad_area) {
  cout<<"Opps, argumento invalido para area ()" ;
}
