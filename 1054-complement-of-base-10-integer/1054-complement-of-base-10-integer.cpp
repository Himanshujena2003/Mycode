class Solution {
public:
    int bitwiseComplement(int n) {
        int a=n;
        int temp=0;

        if(n==0){  //edge case 
            return 1;
        }

        while(a!=0){
            temp=(temp<<1) | 1;
            a=a>>1;
        }
        int ans = (~n) & temp;
        return ans;
    }
};