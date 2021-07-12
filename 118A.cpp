#include <iostream> 


using namespace std; 

bool isWovel (char c){
   
    if ('a'  || 'A') return true ; 
    if ('o'  || 'O') return true ; 
    if ('u'  || 'U') return true ; 
    if ('e' || 'E') return true ;
    if ('i' || 'I') return true; 
    if ('y' || 'Y') return true; 
    
    return false;
}

int main (void) { 

string s ; 
cin >> s; 

    cout << s;
    for (int i=0 ; i<s.length(); i++ ){

    if (isWovel(s[i])) s.erase; 

 
    }
     


cout << s <<  endl;
for (int i = 0 ; i < s.length(); i= i+2) { 
    s.insert(i, ".");

}


cout << s << endl ;

}