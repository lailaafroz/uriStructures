#include <stdlib.h>
#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main(){

    int tc,temp;
    cin >> tc;
    for(int x=0; x<tc && tc >=1 && tc <= 10000; x++){
    
      int  n1,n2,d1,d2;
      char c2;
      int  value[4];
      string  str[3];
        
       for(int i=0; i<3; i++){
              cin >> value[i];
              cin >> str[i];
       }
       cin >> d2;
       
       n1 = value[0];
       d1 = value[1];
       n2 = value[2];
    	
      c2 = str[1][0];
      
      //cout << c2;	
    		
      if(c2=='+'  || c2=='-'){
      
        lessratio(n1,d1);
        lessratio(n2,d2);
    
        temp = d1;
        d1 *= d2;	
        n1 *= d2;
        n2 *= temp;
        d2 *= temp;
        if(c2=='+'){
            n1 += n2;
        }
        else {
            n1 -= n2;
        }
    }
    else if(c2=='*'){
        n1 *= n2;
        d1 *= d2;
    }
    else if(c2=='/'){
        n1 *= d2;
        d1 *= n2;
    }

    n2 = n1;
    d2 = d1;
    
    lessratio(n2,d2);
    
    cout << n1 << "/" << d1 << " = " << n2 << "/" << d2 << endl;
    }
    return 0;
}
