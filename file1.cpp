#include <fstream>
#include <set>
#include <vector>

using namespace std;
void task4() {
    ifstream input("input.txt");
    set<string> words;

    string word;
    while (input >> word) {
        words.insert(word);
    }

    words.insert("дядя"); 

    ofstream output("output.txt");
    for (auto w : words) {
        output << w << '\n';
    }
}


int main(){
    task4();
}