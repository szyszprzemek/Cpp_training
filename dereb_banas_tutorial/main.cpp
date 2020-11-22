#include <cstdlib>
#include <iostream>
#include <string>
#include <limits>
#include <vector>
#include <sstream>
#include <numeric>
#include <ctime>
#include <cmath>
#include <algorithm>
#include <iterator>
#include <fstream>
#include <functional>
#include <deque>
#include <iterator>
#include <memory>
#include <stdio.h>
#include <thread>
#include <chrono>
#include <mutex>
#include <deque>
#include <list>
#include <forward_list>
#include <set>
#include <map>
#include <stack>
#include <queue>
#include <regex>

using namespace std;

int main(int argc, char** argv) {

    string str = "The ape was at the apex";
    regex reg ("(ape)[^ ]?");
    smatch matches;
    if(regex_search(str, matches, reg) == true){
        cout << matches.size() << " Matches" << endl;

        while(regex_search(str, matches, reg)){
            cout << matches.str(1) << endl;
            cout << "At index " << matches.position(1) << endl;

            str = matches.suffix().str();
            cout << "What is here? : " << str << endl;

        }
    }

    return 0;
}

