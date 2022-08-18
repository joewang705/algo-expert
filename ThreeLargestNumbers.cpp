#include <vector>
using namespace std;

void updateGreatest(int n, vector<int> &greatest){
  if(n<greatest[1]){
    greatest[0] = n;
  } else if (n<greatest[2]){
    greatest[0] = greatest[1];
    greatest[1] = n;
  } else{
    greatest[0] = greatest[1];
    greatest[1] = greatest[2];
    greatest[2] = n;
  }
}

vector<int> findThreeLargestNumbers(vector<int> array) {
  // Write your code here.
  vector<int> greatest{INT_MIN, INT_MIN, INT_MIN};

  for(int n : array){
    if(n > greatest[0]){
      updateGreatest(n, greatest);
    }
  }

  return greatest;
}


