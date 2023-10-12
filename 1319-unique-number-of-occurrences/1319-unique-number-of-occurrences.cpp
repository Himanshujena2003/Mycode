class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        int i=0;
        sort(arr.begin(),arr.end());
        vector<int> a;
        while(i<arr.size()){
           int count=1;
           for(int j=i+1;j<arr.size();j++){
               if(arr[i]==arr[j]){
                   count++;
               }
           }
           a.push_back(count);
           i+=count;
        }
        sort(a.begin(),a.end());
        for(int i=0;i<a.size()-1;i++){
           if(a[i]==a[i+1])
            return false;
        }
       return true;
    }
};