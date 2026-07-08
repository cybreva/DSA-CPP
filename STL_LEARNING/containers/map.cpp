#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    map<int,string> students;

    students[100] = "tanmay";
    students[133] = "rahul";
    students.insert({121 , "amit"});
    students.insert({131 , "ravi"});

    for(auto value : students){
        cout << value.first << " : " << value.second << "\n" << flush;
    }

    auto it = students.find(121);

    if(it != students.end())
    {
        cout << it->second << flush;
    }
    cout << "\n" << flush;

    cout << students.count(121);
    students.erase(121);
    cout << "\n" << flush;
    for(auto value : students){
        cout << value.first << " : " << value.second << "\n" << flush;
    }

    cout << "\n" << flush;


}