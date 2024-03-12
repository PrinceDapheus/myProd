//
//  main.cpp
//  node_A
//
//  Created by Afrobotix on 2024/03/11.
//  Learning how to work with constant objects in seperste files.

#include <iostream>
using namespace std;


class computer {
    
public:
    void printSome(string x) const{
        cout << x << endl;
    }
    
    
};

int main (){
    
    computer const c1;
    
    char input1;
    string content;
    string placeholder;
   
    cout << "Type in your name:"<< endl;
    getline(cin, content);
    
   
    cout<<"Name: ";
    c1.printSome(content);
    cout << "Would you like to change your name?" << endl;
    ///*
   
    cin >> input1;
    
    if (input1 == 'n'){
        cout << "Your name is still:";
        c1.printSome(content);
    }
    
    if (input1 == 'y'){
        //c1.printSome(placeholder);
        cout << "Type in your new name:"<<endl;
        //getline(cin, content);
        cin >> content;
        cout << "Your new name is :";
        c1.printSome(content);
        
    }
    
  
   // else cout << "Wrong character usage" <<endl;
    
    
    return 0;
     
    // */
}
