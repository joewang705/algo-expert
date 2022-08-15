using namespace std;

bool generateDocument(string characters, string document) {
  // Write your code here.
  unordered_map<char, int> map;

  for(char c: characters){
    if(map.find(c) == map.end()) map[c] = 0;
    map[c]++;
  }

  for(char c: document){
    if(map.find(c) == map.end() || map[c] == 0) return false;
    map[c]--;
  }
  return true;
}