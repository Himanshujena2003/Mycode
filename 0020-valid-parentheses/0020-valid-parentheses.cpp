class Solution {
public:
    bool isValid(string s) {
      stack<char> k;
    for(int i=0;i<s.length();i++){
        char ch=s[i];

        if(ch=='(' || ch=='[' || ch=='{'){
            k.push(ch);
        }
        else{
            if(!k.empty()){
                char temp=k.top();
                if((ch==')' && temp=='(') || (ch=='}' && temp=='{') || (ch==']' && temp=='[')){
                    k.pop();
                }
                else{
                    return false;
                }
            }
            else{
                return false;
            }
            
        }
    }
    if(k.empty()){
        return true;
    }
    else{
        return false;
    }  
    }
};