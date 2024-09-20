#include <iostream>  
 
#include <ctime>

#include <string>
/* if you want make a function, how you would start ??? */


using namespace std; 

/* now it is not empty */
void printTimeWithMessage(const string& customMessage) {

time_t tt;

tm*ti;

time(&tt);

ti = localtime(&tt);


    string formattedTime = asctime(ti);

formattedTime.pop_back();

cout << "[" << formattedTime << "]" << customMessage << endl;
}
int main()
{

    printTimeWithMessage("your custom message goes here.");

    return 0;
}