using namespace std;
char encrypt(char c, int key, string alphabet){
  int new_c = alphabet.find(c) + key;
  return alphabet[new_c % 26];
}
string caesarCypherEncryptor(string str, int key) {
  // Write your code here.
    key = key % 26;
   string alphabet = "abcdefghijklmnopqrstuvwxyz";
   vector<char> encrypted;

   for(int i = 0; i<str.length(); i++){
     encrypted.push_back(encrypt(str[i], key, alphabet));
   }

    return string(encrypted.begin(), encrypted.end());
}

