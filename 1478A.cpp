#include <iostream>
#include <vector> 

using namespace std; 


int main (void){
    int testcase ; 
    int n ; 
    
    vector <int> v ; 
    vector <int> v1 ; 

    cin >> testcase ; 
    for (int i = 0 ; i < testcase ; i++ ){
        cin >> n ; 
        int temp ;

        for (int j = 0 ; j < n ; j++ ){
            cin >> temp ; 
            v.push_back(temp); 
        }

        int temp1 = 1 ; 
        int colors= 0 ; 

        for (int k = 1; k < v.size(); k++){
            if (v[k] ==  v[k-1]){
                temp1++;
            } else{ 
                if (temp1 > colors){
                    colors = temp1; 
                    temp1= 1;
                }
            }
        }

        if (temp1 > colors ) colors = temp1; 
        
        v1.push_back(colors);
        v.clear();

    }

    cout << " ------------------ " << endl ; 

    for (int  i= 0 ; i < v1.size(); i++ ){
        cout << v1[i] <<endl; 
    }

}