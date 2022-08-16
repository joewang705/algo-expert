#include <vector>
using namespace std;

vector<int> insertionSort(vector<int> array) {
  // Write your code here.
  if(array.size() == 0) return {};
    
  for(int i = 1; i<array.size(); i++){
    int key = array[i];
    int j = i-1;
    while (key<array[j] && j>=0){
      array[j+1] = array[j];
      j--;
    }

    array[j+1] = key; 
  }

  
  return array;
}
