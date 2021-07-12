#include <iostream> 
#include <vector> 
#include <numeric> 
#include <cmath> 

using namespace std; 
int main (void) {

    int test, n ; 
    vector <int> v ; 
    cin >> test; 

    for (int i =  0 ; i< test; i++ ){ 
        cin >> n ; 
        
        for ( int i =0 ; i < n ; i++ ){ 
            int temp ; 
            cin >> temp ; 
            v.push_back(temp);     
            }
            
            int res = abs( n - accumulate(v.begin(), v.end(), 0 ) ) + 1  ;
        cout << res << endl ;
    }
}
