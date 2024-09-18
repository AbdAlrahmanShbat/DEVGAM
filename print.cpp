#include <iostream>  
 
#include <ctime>

using namespace std; 

int main () {

// declaring argument for the time 

time_t tt;

// declaring varebuls to store return value of local time 
tm * ti ;

// appplying time 

time (&tt);

// using localtime 

ti=localtime(&tt);


cout << "current day . date and time is " << asctime(ti); 


return 0;

}
