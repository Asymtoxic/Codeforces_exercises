#include <iostream> 

using namespace std; 



int LowerLetter(char c){ 
        if ( c >= 'A' && c <= 'Z'){
            c = c+ 32 ; 
        }    
        return c; 
    }




int main(){ 
string s1 ; 
string s2 ; 

cin >>  s1 ; 
cin >>  s2 ;

    for (int i = 0 ; i < s1.size(); i++){
        if(LowerLetter(s1[i])!= LowerLetter(s2[i])){
            if (LowerLetter(s1[i]) > LowerLetter(s2[i])){
                 cout << 1 << endl ; 
                 return 0 ; 
            } else  {
                cout << -1 << endl ; 
                return  0;
            }
        }
    }
    cout << 0 << endl ;
}