#include <vector>
using namespace std;

bool classPhotos(vector<int> redShirtHeights, vector<int> blueShirtHeights) {
  // Write your code here.

  sort(redShirtHeights.begin(), redShirtHeights.end());
  sort(blueShirtHeights.begin(), blueShirtHeights.end());
  int tallest = redShirtHeights.size() - 1;
  bool red_back_row = true;
 
  if (blueShirtHeights[tallest]>redShirtHeights[tallest]) red_back_row = false;
  
  for(int i = 0; i<redShirtHeights.size(); i++){
    if(red_back_row){
      if (!(redShirtHeights[i]>blueShirtHeights[i])) return false;
    } else{
      if (!(redShirtHeights[i]<blueShirtHeights[i])) return false;
    }
  }
  return true;
}
