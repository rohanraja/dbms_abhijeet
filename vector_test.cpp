
#include <cmath>
#include <vector>
#include <iostream>
#include<string>
#include<sstream>
#include<map>
#include<cstdlib>
#include<utility>
using namespace std;
int main() {

  typedef vector<vector<int> > time_value;

  typedef map<string, time_value> inner_map;

  time_value t ;
   
  inner_map x ;

  vector<int> a,b;
  a.push_back(1);
  b.push_back(3);

  x["abc"] = t;


  cout << x["abc"][0][0] << x["abc"][1][0] ;

  return 0;
}
