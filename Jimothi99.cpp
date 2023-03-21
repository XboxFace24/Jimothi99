#include <iostream>
#include <string>

int main()
{
    std::cout << "You are now talking to Jimothi99!";
    for (;;) {
        std::string word;
        std::cout << "\nSend a message: ";
        getline(std::cin, word);
        if (word == "!stop") {
            std::cout << "You have stopped talking to Jimothi99.";
            return 0;
        }
        else {
            std::cout << "Jimothi99: " << word;
        }
    }
}