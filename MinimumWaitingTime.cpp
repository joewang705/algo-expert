using namespace std;

int minimumWaitingTime(vector<int> queries) {
  // Write your code here.
  int sum = 0;
  if(queries.size() < 2) return sum;
  sort(queries.begin(), queries.end());
  sum += queries[0];
  for(int i = 1; i<queries.size() - 1; i++){
    queries[i] += queries[i-1];
    sum += queries[i];
  }
  return sum;
}
