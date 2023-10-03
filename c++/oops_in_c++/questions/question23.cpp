#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;
int main()
{
 cout << "Enter the text in the textfile you want to enter : ";
 string textfile;
 getline(cin, textfile);
 ofstream fout("Sample.txt");
 fout << textfile << endl;
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