
#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main()
{
 ofstream fout("Sample.txt", ios::app);
 fout << "There is some text which I am going to add into my file" << endl;
 fout.close();
 ifstream fin("Sample.txt");
 string line;
 while (getline(fin, line))
 {
 cout << line << endl;
 }
 fin.close();
 return 0;
}
