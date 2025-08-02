#include <string>
#include <iostream>

std::string exclaim (std::string s_input)
{
    std::string s_output = s_input;

    std::string punctuation{",.:;"};
    std::string replaced{"!"};

    for (char c : punctuation) {
        size_t pos = 0;
        while (pos != std::string::npos) {
            pos = s_output.find(c,pos);
            if (pos != std::string::npos) {
                s_output.replace(pos,1,replaced);
            }
        }
    }

    return s_output;
}

int main()
{
    std::string str{"To be, or not, to be, that is the question."};
    std::cout << exclaim(str) << std::endl;
    return 0;
}