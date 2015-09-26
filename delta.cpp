#include <cmath>
#include <vector>
#include <iostream>
#include<string>
#include<sstream>
#include<map>
#include<cstdlib>
#include<utility>

using namespace std;

struct WINDOW{

  int x0, x;
  vector<int> T;
  vector<int> Y;

  int sumx, sumy, sumx2, sumy2, sumxy ;

};

struct CONSTANTS{

  float a, b ;

};

CONSTANTS Linear_fit(WINDOW w)
{
  CONSTANTS c;

  w.sumx += w.T[w.x];
  w.sumy += w.Y[w.x];
  w.sumx2 += w.T[w.x]*w.T[w.x];
  w.sumy2 += w.Y[w.x]*w.Y[w.x];
  w.sumxy += w.Y[w.x]*w.T[w.x];

  return c;
};

float LSS(WINDOW w, CONSTANTS c)
{
  

  return 0.0;
}

int delta(WINDOW data, int k){
  int x0 = 0;

  for(int x = 2; x < data.Y.size(); x++){
  

   WINDOW window;
   window = data;
   window.x0 = x0;
   window.x = x;


   CONSTANTS c = Linear_fit(window) ;

   cost1 = LSS(window, c);


   Reset_Sums(window);


    

  }



  return 0.0;

}


int main(){


return 0;
}
