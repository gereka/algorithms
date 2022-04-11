#include <iostream>
#include <random>
#include <functional>
#include <vector>
#include <future>

using namespace std;

int incircle(int num_draws){
  auto gen = bind(uniform_real_distribution<double>{-1,1},default_random_engine{random_device()()});
  int result = 0;
  for (int i=0; i<num_draws; i++){
    double x = gen();
    double y = gen();
    if (x*x + y*y <= 1)
      result++;
  }
  return result;
}


int main(){
  int num_draws = 10000000;
  int num_threads = 18;
  
  vector<future<int>> fu;
  for (int i=0; i<num_threads; i++)
    fu.push_back(async(incircle, num_draws));

  int sum = 0;
  for (int i=0; i<num_threads; i++)
    sum += fu[i].get();
		 
  cout << 4.0*sum/num_draws/num_threads << endl;
  
  return 0;
}
