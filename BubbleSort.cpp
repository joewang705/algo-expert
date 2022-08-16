#include <vector>
using namespace std;

vector<int> bubbleSort(vector<int> array) {
  // Write your code here.
  bool is_sorted = false;
  while(!is_sorted){
    is_sorted = true;
    for(int i = 0; i<array.size() - 1; i++){
      if(array[i] > array[i+1]){
        swap(array[i], array[i+1]);
        is_sorted = false;
      }
    }
  }
  return array;
}
