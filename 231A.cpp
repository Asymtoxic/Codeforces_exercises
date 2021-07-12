
#include <iostream> 
 
using namespace std ; 
 
int main (void) {
    int n ; 
    int count = 0; 
    cin >> n ; 
    
    int temp1 , temp2 , temp3 ;
    
    for (int i = 0 ; i < n ; i++ ){
            
        cin >> temp1 >> temp2 >> temp3;
        
        
        
        if (temp1 + temp2 + temp3 >= 2 ) count ++ ;
            
    }
    
    cout << count ; 
    
}