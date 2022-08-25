#include <vector>
using namespace std;

int binarySearch(vector<int> array, int target) {
  // Write your code here.
  int l{0}, r{0};
  r = array.size() - 1;
        
  while (l <= r){
    int average;
    average = (l+r)/2;
            
    if (array[average] == target) return average;
    (array[average] < target)?l=average+1:r=average-1;       
  }
        
  
  return -1;
}
