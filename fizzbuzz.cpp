//fizzbuzz.cpp
//Author: Diba Mirza
//Created: 01-17
//Program to implement fizzbuzz, inputs from a file 
//

#include <iostream>
#include <string>
#include <cstdlib>
#include <fstream>

using namespace std;

void fizzbuzz(int n){
    if(n%3==0 && n%5 == 0)
        cout<<"Fizzbuzz\n";
    else if(n%3 == 0 )
        cout<<"Fizz"<<endl;
    else if(n%5 ==0)
        cout<<"Buzz"<<endl;
    else
        cout<<n<<endl;
}


int main(int argc, char * argv[]){

    ifstream ifs;
    string thisline;
    if(argc !=2){
        cerr<<"Usage : "<<argv[0]<< " <number>"<<endl;
        exit(2); //Failed 
    }
    
    ifs.open(argv[1]);
    if(ifs.fail()){
        cerr<<" Could not open file "<<argv[1]<<endl;
        exit(2);
    }
    
    getline(ifs, thisline);
    while (!ifs.eof()){
       // cout<<thisline<<endl;
        fizzbuzz(stoi(thisline));
        getline(ifs, thisline);
    }


    return 0;
}

