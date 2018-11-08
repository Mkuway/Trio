#include <iostream>
using namespace std;
 void swap(int& red, int& green, int& blue);

int main()
{
  //DO NOT CHANGE WITHIN THIS AREA...
  int red, blue, green;
  cout<<"Enter Red, Green, and Blue values: ";
  cin>>red>>green>>blue;
  //...END OF "DO NOT CHANGE" AREA


 swap(red,green,blue); // <-- ADD YOUR FUNCTION CALL HERE


  //DO NOT CHANGE WITHIN THIS AREA...
  cout<<"Rearranged....\n";
  cout<<"RGB: "<<red<<","<<green<<","<<blue<<endl;
  return 0;
  //...END OF "DO NOT CHANGE" AREA
}

void swap(int& red, int& green, int& blue)
{
      //  int temp = red;
       // red = green;
      //  green = blue;
       // blue = temp;
    if(red>green && green>blue)
    {
           //already in order
    }
    else if(blue > green && green > red)
    {
        int temp = blue;
        blue = red;
        red = temp;
    }
    else if (red > blue && blue > green) {
        int temp = blue;
        blue = green;
        green = temp;
    }
    else if(blue > red && red > green)
    {
            int temp = red;
            red = green;
            green = temp;
            int temp2 = red;
            red = blue;
            blue = temp2;
    }
    else if(green > red && red > blue)
    {
            int temp = green;
            green = red;
            red = temp;
    }
    
}
// <-- ADD YOUR FUNCTION DEFINITON HERE
