#include<iostream>
#include<string>

int main(int argc, char const *argv[])
{
    // To declare more than one variable of the same type, use a comma-separated list:

    int x = 5, y = 6, z = 50;

    // integer number , 'short' range is -32765 to 32767
    short a = 10 ;

    // integer number , int range is bigger than short 
    int b = 10000000;

    // partial number , float takes 4 byte from memeory
    float c = 10.5;
    // double is more accurate than float and take more memory space
    // double takes 8 byte of memory 
    double g = 10.55;

    // textual data 
    // char takes only one letter , must single quotation
    char f = 'a';
    //
    // string e = "ahmed basem" 

    // logical data type
    // c++ compiler handles "true " to 1  and "false" to 0
    bool h = false ;
 

    std::cout<<h;
    return 0;
}
