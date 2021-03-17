// SmartBear is a smart speaker based on reaspberry pi
#include <iostream>
#include <Token.h>

int main()
{
    std::cout << "Start the program" << std::endl;

    TokenC::SpeechGetToken("a", "b", "c", "d");

    return 0;

}