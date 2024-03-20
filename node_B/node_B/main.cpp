//
//  main.cpp
//  node_B
//
//  Created by Afrobotix on 2024/03/13.
//

#include <iostream>
using namespace std;


class profile{
    
public:
    
    profile (){
        
    }
    
    profile (int a){
        age = a;
    }
    

    int age;
    
    
    profile operator + (profile &obj){
    profile result;
     result.age  = age + obj.age;
        return result;
    }

    
    
};



int main(){
    
    profile a = 30;
    profile b = 10;
    profile c;
    
   c = a + b;
    
    cout << c.age <<endl;
    
    return 0;
}
