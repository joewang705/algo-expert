#include <vector>
using namespace std;

string tournamentWinner(vector<vector<string>> competitions,
                        vector<int> results) {
  // Write your code here.

  unordered_map<string, int> map;
  string winner = "";
  int highest_score = 0;

  for(int i{0}; i<competitions.size(); i++){
    if(map.find(competitions[i][!results[i]]) == map.end()){
      map.insert(make_pair(competitions[i][!results[i]], 3));
    } else{
      map[competitions[i][!results[i]]] += 3;
    }

    if(map[competitions[i][!results[i]]] > highest_score){
      winner = competitions[i][!results[i]];
      highest_score = map[competitions[i][!results[i]]];
      cout << winner;
    }
    
  }
  return winner;
}