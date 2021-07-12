#include <iostream> 
#include <vector> 

using namespace std ; 

int main (void){

int n, temp , k, count= 0  ; 
cin >> n >> k ;
vector <int> v ;

for (int i = 0 ; i < n ;i++ ){
    cin >> temp ; 
    v.push_back(temp);

}

for (int i = 0 ; i < n ; i ++ ) {
    if (v[i]>= v[k-1] && v[i]> 0 ) count ++ ;
}

cout << count ;


}