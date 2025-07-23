#include <iostream>
#include <string>

using namespace std;

class URL {
public:
    URL(string protocol, string resource) : protocol(protocol), resource(resource) {}

    void display()
    {
        cout << protocol << SEPERATOR << resource << endl;
    }
private:
    static const string SEPERATOR;
    string protocol;
    string resource;
};
const string URL::SEPERATOR = "://";

int main()
{
    URL turl{"http","www.example.com/index.html"};
    turl.display();
    return 0;
}