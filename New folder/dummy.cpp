#include <iostream>
#include <algorithm>
#include <map>
using namespace std;

string solve(string c){
    int diff = 'u' - 'h';
    for(int i = 0; i < c.size(); i++){
        char ch = (c[i] - diff);
        if(ch < 'a'){
            int d = 'a' - ch;
            ch = 'z' - d + 1;
        }
        c[i] = ch;
        // cout << c;
    }
    return c;
}

int calculate_position(string log_data){
    int ans = 0;
    int fow = 0;
    int top = 0, dist = 0;
    string st = "";
    for(int i = 0; i < log_data.size(); i++){
        st += log_data[i];
        // cout << st << " ";
        if(log_data[i] == ' '){
            st.pop_back();
            i++;
            int fact = 1;
            dist = 0;
            while(log_data[i] != '\n' && log_data[i] != '\0'){
                // cout << dist << "=>";
                dist = dist * fact + (log_data[i] - '0');
                fact *= 10;
                i++;
            }
            // i--;
            if(st == "forward"){
                fow += dist;
            }else if(st == "down"){
                top += dist;
            }else{
                top -= dist;
            }
            // cout << dist << " " << fow << " " << top<< endl;;
            st = "";
        }
        ans += dist;
    }
    return top * fow;
}

string serialize(map<string, string> pr){
    string ans = "host:";
    ans += pr["host"];
    ans += ";";
    // pr.erase(pr["host"]);
    for(auto i : pr){
        if(i.first == "host")   continue;
        ans += i.first;
        ans += ":";
        ans += i.second;
        ans += ";";
    }
    ans.pop_back();
    return ans;
}

int main()
{
    // cout << solve("uryyb") << "\n"; 
    // cout << solve("ab"); 
    // cout << calculate_position("forward 5\ndown 5\nforward 8\nup 3\ndown 8\nforward 2");
    map<string, string> pr = {{"user", "dread"}, {"role", "admin"}, {"host", "127.0.0.1"}};
    cout << serialize(pr) << endl;
    return 0;
}