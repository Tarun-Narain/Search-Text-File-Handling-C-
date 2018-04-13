
#include<iostream>
#include<fstream>
#include<stdio.h>
#include<string>

using namespace std;

string read(int n,char *input)
{
    int i=0;
    fstream file;
    string line;
    file.open(input,ios::in);
    while(getline(file,line))
    {
         file >> line;
         i++;
         if(i==n)
          {
             break;
          }
    }
    return line;
}


