using namespace std;

int firstNonRepeatingCharacter(string string) {
  // Write your code here.

  map<char, int> map;

  for(int i = 0; i<string.length(); i++){
    if(map.find(string[i]) == map.end()){
      map[string[i]] = 1;
    } else{
      map[string[i]]++;
    }
  }

  for(int i = 0; i<string.length(); i++){
    if(map[string[i]] == 1) return i;
  }
  return -1;
}
