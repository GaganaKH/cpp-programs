#include<bits/stdc++.h>
#include<fstream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main()
{
  ifstream l("lie.txt");
  ifstream t("truth.txt");

  string tru;
  string li;
 
  getline(t,tru);
  getline(l,li);

  int tcount=0;
  int lcount=0;

  while(getline(t,tru))
  {
    tcount++;
  }
   while(getline(l,li))
  {
    lcount++;
  }

for(int i=0;i<10;i++)
{
  int t1=0,t2=0,l1=0;
  srand(time(0));
  while(t1==t2){
    t1=rand()%tcount;
    t2=rand()%tcount;
    l1=rand()%lcount;
  }

  ifstream file1("lie.txt");
  ifstream file2("truth.txt");
 
  string tru1;
  string tru2;
  string li1;

  for(int i=0;i<=max(t1,max(t2,l1));i++)
  { 
   string txt1;
   string txt2;
   getline(file1,txt1);
   getline(file2,txt2);

    if(i==t1){
      tru1= txt1;
    }
    if(i==t2){
      tru2=txt1;
    }
    if(i==l1){
      li1=txt2;
    }
  }
  int bullet =1;
  int liecheck=0;
  for( int i=0;i<=max(t1,max(t2,l1));i++)
  {
    if(i==t1)
    {
      cout<<bullet<<"."<<tru1<<"\n";
      bullet++;
    }
    if(i==t2)
    {
      cout<<bullet<<"."<<tru2<<"\n";
      bullet++;
    }
    if(i==l1)
    {
      cout<<bullet<<"."<<li1<<"\n";
      liecheck=bullet;
      bullet++;
    }
  }

  int serial_no;
  cout<<"Enter the serial number of false statement\n";
  cin>>serial_no;
  if(serial_no==liecheck)
  {
    cout<<"congratulations! Your answer is correct\n";
  }
  else{
    cout<<"The answer is number"<<liecheck<<"\nBetter luck next time\n\n";
  }
}  
  return 0;
}