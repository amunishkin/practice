/*
Write a program which will:

Read in the data from the attached languages.txt file
Use each line of input to populate a language object
Add this object to a vector
Print out all the data in the vector, separated by commas

Your output should look like this:

C++, Stroustrup, 1979
Java, Gosling, 1991
*/

#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <sstream>

using namespace std;

struct language {
    string lang;
    string designer;
    int date;
};


int main()
{
    ifstream ifile{"./languages.txt"};
    vector<language> data{};

    if (ifile) {
        string text{""};
        while (getline(ifile, text)) {
            //cout << text << endl;
            stringstream ss(text);
            string item{""};
            int cnt=0;
            string _lang{};
            string _designer{};
            int _date{};
            while (getline(ss, item, ' ')) {
                if (0==cnt) {
                    _lang = item;
                }
                if (1==cnt) {
                    _designer = item;
                }
                if (2==cnt) {
                    _date = stoi(item);
                }
                cnt++;
            }
            language l{_lang,_designer,_date};
            data.push_back(l);
        }
        //cout << endl;
        ifile.close();
    }

    for (auto l : data) {
        cout << l.lang << ", " << l.designer << ", " << l.date << endl;
    }

    return 0;
}


/*
#include <iostream>
#include <string>
#include <sstream> // Required for std::stringstream
#include <vector>  // Required for std::vector

std::vector<std::string> splitStringByChar(const std::string& s, char delimiter) {
    std::vector<std::string> tokens;
    std::stringstream ss(s);
    std::string token;
    while (std::getline(ss, token, delimiter)) {
        tokens.push_back(token);
    }
    return tokens;
}

int main() {
    std::string text = "apple,banana,orange";
    char delimiter = ',';
    std::vector<std::string> fruits = splitStringByChar(text, delimiter);

    for (const std::string& fruit : fruits) {
        std::cout << fruit << std::endl;
    }
    return 0;
}
*/
