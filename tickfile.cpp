#include <cmath>
#include <vector>
#include <iostream>
#include<string>
#include<sstream>
#include<map>
#include<cstdlib>
#include<utility>

using namespace std;

typedef vector <vector<int> > time_value;
typedef map<string,time_value > inner_map;
typedef map<string, inner_map> outer_map; 
outer_map out_map;

outer_map* take_input() {
  string first_line;int n;
  cin>>first_line;
  cin>>n;
  string input_line;
  string buf;
  getline(cin,input_line);
  int length_string;
  for (int i=0;i<n;i++)
  {
    inner_map in_map;
    getline(cin,input_line);
    istringstream iss(input_line);
    vector<string> input_values;
    while (iss >> buf){
      input_values.push_back(buf);}
    length_string=input_values.size();
    int temp_time= atoi(input_values[0].c_str());
    if ( out_map.find(input_values[1]) == out_map.end() ) {
      for(int j=2;j<length_string-1;j=j+2){
        int temp_value= atoi(input_values[j+1].c_str());
        in_map[input_values[j]];
        vector<int> x1;
        vector<int> x2;
        x1.push_back(temp_value);
        x2.push_back(temp_time);
        time_value vectr;
        vectr.push_back(x1);vectr.push_back(x2);
        in_map[input_values[j]]=vectr;
        // in_map.insert(make_pair<string,int>(input_values[j],temp));
      }
      out_map.insert(make_pair<string,inner_map>(input_values[1],in_map));	}
    else {
      // cout<<"Symbol found"<<"\n";
      inner_map update_old_in_map;
      update_old_in_map=out_map[input_values[1]];

      for(int j=2;j<length_string-1;j=j+2){
        int temp_value= atoi(input_values[j+1].c_str());
        if(update_old_in_map.find(input_values[j])==update_old_in_map.end())
        {
          cout<<"field not found"<<"\n";
          update_old_in_map[input_values[j]];
          vector<int> x1;
          vector<int> x2;
          x1.push_back(temp_value);
          x2.push_back(temp_time);
          time_value vectr;
          vectr.push_back(x1);vectr.push_back(x2);
          update_old_in_map[input_values[j]]=vectr;
          // update_old_in_map[input_values[j]].push_back(make_pair<int,int>(temp_time,temp_value));
        }
        else{
          //  update_old_in_map[input_values[j]].push_back(make_pair<int,int>(temp_time,temp_value));
          update_old_in_map[input_values[j]][0].push_back(temp_value);
          update_old_in_map[input_values[j]][1].push_back(temp_time);
          cout<<"field found"<<"\n";
        }
        out_map[input_values[1]]=update_old_in_map;
        // in_map.insert(make_pair<string,int>(input_values[j],temp));
      }
    }
  }

  return &out_map;
}
