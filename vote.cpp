#include <iostream>
void Vote(int choice);
using namespace std;
main()
{
  int n,stop;
  do{
   cout<<"=========================================Voting System=========================================";
   cout<<"\nPlease vote any one of your choice.";
   cout<<"\n\n1)BJP\n2)Congress\n3)AAP\n";
   cout<<"=========================================Voting System=========================================\n";
   cin>>n;
   if(n>0&&n<=3)
   {
    Vote(n);
   }
   else{
    cout<<"Enter Valid input\n";
   }

  cout<<"\nEnter any number to continue else 0 to finish Voting and find who won the Vote\n";
  cin>>stop;
  }
  while(stop);
   Vote(stop);
}
void Vote(int choice)
{
 static int a,b,c;
 if(choice==1)
 {
  a++;
 }
 if(choice==2)
 {
  b++;
 }
 if(choice==3)
 {
  c++;
 }
 cout<<"\n=========================================Total Votes=========================================";
 cout<<"\nVotes for BJP="<<a<<"\n";
 cout<<"Votes for Congress="<<b<<"\n";
 cout<<"Votes for AAP="<<c<<"\n";
 cout<<"\n=========================================Total Votes=========================================";

 if(choice==0)
 {
  if(a>b&&a>c)
  {
   cout<<"\n=========================================Result=========================================";
   cout<<"\nBJP won with votes of "<<a<<"\n";
   cout<<"=========================================Result=========================================";
  }
  if(b>a&&b>c)
  {
   cout<<"\n=========================================Result=========================================";
   cout<<"\nCongress won with votes of "<<b<<"\n";
   cout<<"=========================================Result=========================================";

  }
  if(c>b&&c>a)
  {
   cout<<"\n=========================================Result=========================================";
   cout<<"\nAAP won with votes of "<<c<<"\n";
   cout<<"=========================================Result=========================================";

  }
 }
}


