class Solution {
public:
    string decodeString(string s) {
     stack<int>num;
     stack<string>str;
     string curr = "";
     int number = 0;
     for(char c:s){
        if(isdigit(c)) number = number*10+(c-'0');
        else if(c == '['){
            num.push(number);
            str.push(curr);
            number = 0;
            curr = "";
        }
        else if(c == ']'){
            int k = num.top(); num.pop();
            string prev = str.top(); str.pop();
            string temp = "";
            for(int i = 0;i<k;i++){ 
                temp += curr;
            }
            curr = prev +temp;

            
        }
        else{ curr += c;
}
     }
     return curr;   
    }

};
