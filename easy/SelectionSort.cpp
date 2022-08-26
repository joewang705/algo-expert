#include <vector>
using namespace std;

vector<int> selectionSort(vector<int> array) {
  // Write your code here.
  for(int i = 0; i<array.size(); i++){
    int min = i;
    for(int j = i + 1; j<array.size(); j++){
      if(array[j] < array[min]) min = j;
    }
    swap(array[i], array[min]);
    
  }
  return array;
}
