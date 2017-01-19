#include <iostream>
#include <string>
#include <vector>
#include <deque>
#include <queue>
#include <list>
#include <set>
#include <bitset>
#include <map>
#include <valarray>
/*
#include <hash_set>
#include <multiset>
#include <multimap>
#include <priority_queue>
#include <slist>
#include <pair>
#include <unordered_set>
#include <unordered_map>
#include <array>
#include <forward_list>
*/


using namespace std;

void foo();
int main() {

    std::string str_dec = "2001, A Space Odyssey";
    std::string str_hex = "40c3";

//    const char cdata[4] = { 0x0055, 0x006e, 0x10e3, 0x03a3 };
//    string string1(cdata);
    foo();

    std::vector<std::string> vStr;
    vStr.push_back("a");

    std::deque<std::string> dStr;
    dStr.push_back("b");

    std::queue<std::string> qStr;
    qStr.push("c");

    std::list<std::string> lStr;
    lStr.push_back("d");

    std::set<std::string> sStr;
    sStr.insert("e");

    std::set<std::string> bsStr;
    bsStr.insert("f");

    std::map<std::string, std::pair<std::string, std::string> > mStr;
    mStr.insert(mStr.end(), std::make_pair("g", std::pair<std::string, std::string> ("key", "val")));

    std::valarray<std::string> valStr ("h",4);

    return 0;
}