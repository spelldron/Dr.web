
#include <iostream>
#include <vector>
using namespace std;

void join(const vector<int> &from, vector <int> &to){
    int i = 0;
    int j = 0;
    auto iterTo = to.cbegin();
    while(i != to.size() && from.size()!=0){
        if (to[i]>=from[j]){
            to.emplace(iterTo+i, from[j]);
            iterTo = to.cbegin();
            j++;
            i++;
        }
        else{
            i++;
        }
    }
        while(j < from.size()) {
            to.emplace(iterTo+i, from[j]);
            iterTo = to.cbegin();
            i++;
            j++;
        }
}
