#include<iostream>
#include<fstream>
#include<stdio.h>
#include<conio.h>
#include "read.h"
#include "color.h"
#include "gotoxy.h"
using namespace std;

class search1
{
        char s[12];
        int i,j,x,m,y,d;
        string line;
        string code;
        char p;
        string lines[900];
public:
search1()
{j:
    for(i=0;i<=10;i++)
    {
        int l=6;
        if(i==0){  gotoxy(29,0); SetColor(2);
                 cout << "Welcome To TDS Search  \n\n";SetColor(7);
 cout  << "ENTER NAME : ";}
    d=i+13;
    gotoxy(d,2);
        s[i]=getche(); m:
            p=13;
            if(s[i]==p)
            {
                goto td;
            }
     else if(s[i]=='\b' && i>=1)
        {
            --i;
            --i;
            system("cls");
         gotoxy(29,0);
        SetColor(10);
        cout << "Welcome To TDS Search  \n\n";
        SetColor(7);
        cout  << "ENTER NAME : ";
        for(y=0;y<=i;y++)
        {
         cout << s[y];
        }goto m;
        }
        else if(s[i]=='\b' && i==0){
            goto j;}
        system("cls");
        gotoxy(29,0);
        SetColor(10);
        cout << "Welcome To TDS Search  \n\n";
        SetColor(7);
        cout  << "ENTER NAME : ";
        for(y=0;y<=i;y++)
        {
         cout << s[y];
        }
      cout << "\n";
                  cout <<   " ____________________________________________________________________________";
                  cout << "\n|S.no |    NAME        |    ID NUM     |";gotoxy(73,4); cout << "    |";
                  cout << "\n|_____|________________|_______________|_____________________________________|\n";
      for(j=1;j<=280;j++)
        {
            line=read(j,"LIST");
            j++;
            for(x=i;x>=0;x--)
            {
        if(line[x]==s[x])
        {
         if(x==0)
        {
         cout << "|\t";SetColor(11);
         gotoxy(2,l);
         SetColor(7);
         cout << l-5<<".  |";
         SetColor(11);
         gotoxy(9,l);
         cout <<line ;
         gotoxy(23,l);
         SetColor(7);
         cout << "|";
         SetColor(11);
         lines[l]=line;
         code=read(j,"LIST");
         gotoxy(28,l);
         cout << code;
         SetColor(7);
          gotoxy(39,l);
           cout << "|";
         cout <<"\t";
         gotoxy(77,l);
         cout << "|\n";
         l++;
        }}
         else break;
        }
        }
        cout << "|_____|________________|_______________|_____________________________________|\n";
    }
td:
    gotoxy(20,20);
    cout << "ENTER NUMBER : ";
    cin >> j;
    cout << lines[j+5];
}

};

main()
{
    search1 obj;
}
