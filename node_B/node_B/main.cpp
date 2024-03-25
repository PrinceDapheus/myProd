//
//  main.cpp
//  node_B
//
//  Created by Afrobotix on 2024/03/13.
//

#include <iostream>
using namespace std;



class vector2d{
    
public:
    vector2d(int v1 , int v2)
    :vector1(v1) , vector2(v2)
    {
        
    }
    
    vector2d(){
        
    }
    
    
    
    int vector1;
    int vector2;
    
    
    vector2d operator + (vector2d obj){
        
        return vector2d (vector1 + obj.vector1, vector2 + obj.vector2);
    }
    
};

int main (){
    
    vector2d line1 (45 , 77);
    vector2d line2 (77 , 89);
    vector2d sum;
    
    sum = line1 + line2;
    cout << sum.vector1 <<endl;
    
    
    
    return 0;
}
