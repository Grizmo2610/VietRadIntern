#include <cstdio>
#include <iostream>
#include <vector>
#include <hash_map>
#include <map>
#include <stack>
using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) return false;
        long long newNumber = 0, temp = x;
        while (temp != 0) {
            newNumber = newNumber * 10 + temp % 10;
            temp /= 10;
        }

        return newNumber == x;
    }

    int reverse(int x) {
        long long reversed = 0;
        while (x != 0) {
            reversed = reversed * 10 + x % 10;
            x /= 10;
        }
        if (reversed < -2147483648 or reversed > 2147483648) {
            return 0;
        }
        return reversed;
    }

    int maxArea(vector<int>& height) {
        int left = 0, right = height.size() - 1;
        int highest = 0;
        while (left < right) {
            int length = 0;
            int width = right - left;

            if (height[left] < height[right]) {
                length = height[left];
                left += 1;
            }
            else {
                length = height[right];
                right -= 1;
            }
            int area = length * width;
            highest = max(highest, area);
        }
        return highest;
    }

    string intToRoman(int num) {
        int nums[13]={1000,900,500,400,100,90,50,40,10,9,5,4,1};
        string s[13]={"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"};
        int i=0;
        string ret="";
        while(num!=0){
            if(num>=nums[i]){
                num=num-nums[i];
                ret+=s[i];
            }
            else{
                i++;
            }
        }
        return ret;
    }

    int romanToInt(const std::string& s) {
        std::map<char, int> m = {
            {'I', 1},
            {'V', 5},
            {'X', 10},
            {'L', 50},
            {'C', 100},
            {'D', 500},
            {'M', 1000}
        };

        int answer = 0;

        for (size_t i = 0; i < s.length(); ++i) {
            if (i < s.length() - 1 && m[s[i]] < m[s[i + 1]]) {
                answer -= m[s[i]];
            } else {
                answer += m[s[i]];
            }
        }
        return answer;
    }

    bool isValid(string s) {
        stack<char> st;
        map<char, char> m = {{'(', ')'}, {'{', '}'}, {'[', ']'}};

        for (int i = 0; i < s.length(); i++) {
            if (s[i] == '(' or s[i] == '{' or s[i] == '[') {
                st.push(s[i]);
            }else {
                if (st.empty()) {
                    return false;
                }
               if (s[i] != m[st.top()]) {
                   return false;
               } else {
                   st.pop();
               }
            }
        }
        return st.empty();
    }
};


int main() {
    printf("Hello World\n");
}