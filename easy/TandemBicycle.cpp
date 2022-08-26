#include <vector>
using namespace std;

int tandemBicycle(vector<int> redShirtSpeeds, vector<int> blueShirtSpeeds,
                  bool fastest) {
  // Write your code here.
  sort(redShirtSpeeds.begin(), redShirtSpeeds.end());
  sort(blueShirtSpeeds.begin(), blueShirtSpeeds.end());

  int max_speed_sum = 0;
  int pairs = redShirtSpeeds.size();
  for(int i = 0; i<redShirtSpeeds.size(); i++){
    int blue;
    fastest?blue = pairs - 1 - i: blue = i;
    max_speed_sum += max(redShirtSpeeds[i], blueShirtSpeeds[blue]);
  }
  return max_speed_sum;
}
