using namespace std;

string runLengthEncoding(string str) {
  // Write your code here.
  vector<char> ans;
  int count = 1;
  
  for(int i = 1; i<str.length(); i++){
    if((count == 9) || (str[i] != str[i-1])){
      ans.push_back(to_string(count)[0]);
      ans.push_back(str[i-1]);
      count = 0;
    } 
    count++;
  }

  ans.push_back(to_string(count)[0]);
  ans.push_back(str[str.length() - 1]);

  string encoded(ans.begin(), ans.end());
  return encoded;
}
