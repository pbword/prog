#include <fstream>
#include <iostream>
using namespace std;
int main () 
{
   char data[100];
 // open a file in write mode.
   ofstream outfile;
   outfile.open("SY.txt");

   cout << "Writing to the file" << endl;
   cout << "Enter your name: "; 
   cin.getline(data, 100);

   outfile << data << endl;

   cout << "Enter your age: "; 
   cin >> data;
   cin.ignore();
   
   outfile << data << endl;
   outfile.close();

   // open a file in read mode.
   ifstream infile; 
   infile.open("SY.txt"); 
 
   cout << "Reading from the file" << endl; 
   infile >> data; 

   cout << data << endl;
   
   infile >> data; 
   cout << data << endl; 

   infile.close();
   return 0;
}
