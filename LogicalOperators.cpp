#include<iostream>
using namespace std;

int main() {
     int a = 21;
     int b = 10;
     int c ;

     c = a + b;
     cout << "Line 1 - Value of c is :"<< c << endl;
     c = a - b ;
     cout << "Line 2 - Value of c is :"<< c << endl;
     c = a * b ;
     cout << "Line 3 - Value of c is :"<< c << endl;
     c = a / b ;
     cout << "Line 4 - Value of c is :"<< c << endl;
     c = a % b ;
     cout << "Line 5 - Value of c is :"<< c << endl;
     c = a++;
     cout << "Line 6 - Value of c is :"<< c << endl;
     c = a--;
     cout << "Line 7 - Value of c is :"<< c << endl;
     return 0;


     return 0;
}
// another program
#include <iostream>
using namespace std;
 main(){

     int a = 5;
     int b = 20;
     int c;
     if (a && b ){
          cout <<"Line 1 -  is condition is true"<< endl;

     }
     if (a || b ){
       cout <<"Line 2 -  is condition is true"<< endl;   
     }
     
     /*  change the value of a and b */
     a = 0;
     b = 10;

     if (a && b ){
          cout <<"Line 3 -  is condition is true"<< endl;
     
     } else {
          cout <<"Line 4 -  is condition is true"<< endl;

     }

     if (!(a && b )){
          cout <<"Line 5 -  is condition is true"<< endl;


     }
     return 0;

}