#include <iostream>
 using namespace std;

 int main () 
 {
 char choice;
do 
{
cout <<"Enter your choice:"<< endl;
cout <<"Type a for Addition"<< endl;
cout <<"Type s for Subtraction"<< endl;
cout << "Type m for Multiplication"<<endl;
cout <<"Type d for Division"<<endl;
cout <<"Type e for Exponentiation"<<endl;
cout <<"Type t to access Trignometric functions"<<endl;
cout <<"Type q to Quit"<<endl;
    double a;
    double b;
    double sum;
    double r;
    double p;
    cin >> choice; 
  if (choice=='a')
  {
  cout <<"Enter the two numbers :"<<endl;
  cin>>a>>b;
  cout <<"The sum is: "<<a+b<<endl;
  }
  else if (choice=='s')
  {
  cout <<"Enter two numbers: "<<endl;
  cin>>a>>b;
  cout <<"The difference is: "<<a-b<<endl;
  }
  else if (choice=='m')
  {
  cout <<"Enter two numbers: "<<endl;
  cin>>a>>b;
  cout <<"The product is: "<<a*b<<endl;
  }
  else if (choice=='d')
  {
  cout <<"Enter two numbers: "<<endl;
  cin>>a>>b;
  cout <<"The quotient is: "<<a/b<<endl;
  }
  else if (choice=='e')
  {
   cout << "Enter the power to which you would like to raise e to :"<<endl;
   cin >> p;
   double d;
   d=(1 + p/1 +( p*p)/(1*2) +(p*p*p)/(1*2*3) + (p*p*p*p)/(1*2*3*4)+ (p*p*p*p*p)/( 1*2*3*4*5)+(p*p*p*p*p*p)/(720)+(p*p*p*p*p*p*p)/(720*7));
   cout <<"The required value is :"<<d<<endl;
  }
  else if (choice=='t')
  {
    char choice_2;
    cout <<"Enter your choice: "<<endl;
    cout <<"Type s for the sine function"<<endl;
    cout << "Type c for the cosine function"<<endl;
    cout <<"Type t for the tangent function"<<endl;
cin>>choice_2;
if (choice_2=='s')
{
  cout <<"Enter the value in degrees whose sine you would like to calculate:"<<endl;
  cin>>r;
  p=(r/180)*3.1415926535;
  cout <<"The sine value is:"<<( p-(p*p*p)/6 +(p*p*p*p*p)/120- (p*p*p*p*p*p*p)/(120*42))<<endl;
}
else if (choice_2 =='c')
{
   cout <<"Enter the value in degrees whose cosine you would like to calculate:"<<endl;
  cin>>r;
  p=(r/180)*3.1415926535;
  cout <<"The cosine value is:"<<( 1-(p*p)/2 +(p*p*p*p)/24- (p*p*p*p*p*p)/(720))<<endl;
}
else if (choice_2=='t')
{
  cout <<"Enter the value in degrees whose tangent you would like to calculate:"<<endl;
  cin>>r;
  p=(r/180)*3.1415926535; 
  cout <<"The tangent value is:"<<( p+(p*p*p)/(3)+(2*(p*p*p*p*p))/15)<<endl;
}
  }
  } 
  while(choice!='q');
  return 0;
}