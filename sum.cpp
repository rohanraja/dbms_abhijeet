#include"tickfile.cpp"

int sum_values(
    outer_map out_map,
    int start_time,
    int end_time,
    string symbol,
    string field
    ){

  time_value field_arrays = out_map[symbol][field];

  int sum = 0;
  for(int i=0; i< field_arrays[1].size(); i++){


    if( 
        field_arrays[1][i] >= start_time &&
        field_arrays[1][i] <= end_time
      )
    {

      sum += field_arrays[0][i];

    }

  }

  return sum;

}

int product_values(
    outer_map out_map,
    int start_time,
    int end_time,
    string symbol,
    string field
    ){

  time_value field_arrays = out_map[symbol][field];

  int sum = 0;
  for(int i=0; i< field_arrays[1].size(); i++){


    if( 
        field_arrays[1][i] >= start_time &&
        field_arrays[1][i] <= end_time
      )
    {

      sum += field_arrays[0][i];

    }

  }

  return sum;

}
int main(){
  
  outer_map outmap = *take_input();

  int sum =sum_values(
      outmap,
      10,
      15,
      "s1",
      "f3");

  inner_map x = out_map["s1"];
  vector<vector<int> > t= x["f3"];
  cout<<t[1][0];
  cout << "\nSum: "<< sum ; 

  return 0;
}
