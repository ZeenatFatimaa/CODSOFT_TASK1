#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main()
{

srand(time(0));

int number= rand()%10 +1;

int guess;
cout<<"Enter a number to guess"<<endl;
cin>>guess;

cout<<"The number generate by machine is "<<number<<endl;

if(number==guess+1||number==guess-1)
cout<<"The number your guess is 99% correct"<<endl;
else if(number==guess+2||number==guess-2)
cout<<"The number your guess is 85% correct"<<endl;
else if(number==guess+3||number==guess-3)
cout<<"The number your guess is 70% correct"<<endl;
else if(number==guess+5||number==guess-5)
cout<<"The number your guess is 50% correct"<<endl;
else if(number==guess+10||number==guess-10)
cout<<"The number your guess is very low"<<endl;
}
