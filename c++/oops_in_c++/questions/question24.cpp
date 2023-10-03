#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;
int main()
{
 cout << "Enter a word you want to search : ";
 string word;
 cin >> word;
 cout << "Enter the name of the file: ";
 string fname;
 cin >> fname;
 ifstream fin(fname);
 if (!fin.is_open()){
 cerr << "Error opening file: " << fname << endl;
 return 1;
}
int count_word = 0;
string line;
while (getline(fin, line))
 {
 size_t pos = 0;
 while ((pos = line.find(word, pos)) != string::npos)
 {
 count_word++;
 pos++;
 }
}
fin.close();
 cout << "The word " << word << " is appearing " << count_word << " time in the givenfile." <<endl;
 return 0;
}
