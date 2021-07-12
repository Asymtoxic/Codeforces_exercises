#include <iostream> 
using namespace std ; 



int main (void){

int n , number=0 ;
string s; 
cin >> n ; 

for (int i = 0 ; i< n ; i++){

    cin >> s ; 

    for (int j = 0 ; j< s.length(); j++){
        if (s[j] == '+') {
            number ++ ; 
            break;
        }else if (s[j]== '-'){
            number --;
            break;
        }


    }




}

  cout << number ; 


}