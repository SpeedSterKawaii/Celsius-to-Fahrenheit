#include<iostream>
using namespace std;
int main()
{
    float celsius, fahrenheit;
    cout<<"Enter the Temperature in Celsius: ";//who the hell uses farenheight anymore
    cin>>celsius;
    fahrenheit = (celsius*1.8)+32;
    cout<<"\nEquivalent Temperature in Fahrenheit: "<<fahrenheit;
    cout<<endl;
    return 0;
}//works for console and DLL
