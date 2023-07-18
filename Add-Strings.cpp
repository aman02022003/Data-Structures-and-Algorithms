
class Solution {
public:
   void to_addcarry(string temp,int& carry,int i,string& ans){
      if (i<0) return;
        int sum =  (temp[i] - '0') + carry;
        if(sum <= 9 ){
            ans +=(sum + '0');
            carry = 0;
        }
        else{
            carry = sum/10; 
            ans += ((sum%10) + '0');
        }
        to_addcarry(temp,carry,i-1,ans);
    
}
void to_add(string a , string b, int& i , int& j , string& ans,int& carry){
     
        if (i < 0  || j < 0) return;

         int sum =  (a[i] - '0') + (b[j] - '0') + carry;
         if(sum <= 9 ){
            ans +=(sum + '0');
            carry = 0;
        }
        else{
            carry = sum/10;
            ans += ((sum%10) + '0');
        }
        i--; j--;
        to_add(a,b,i,j,ans,carry);
}
string addStrings(string a,string b){

    int i = a.size()-1,j = b.size()-1,carry = 0;
    string ans = "";
    
    to_add(a,b,i,j,ans,carry);

    if(i>=0) to_addcarry( a,carry,i ,ans);
    if(j>=0) to_addcarry( b,carry,j ,ans);

    if(carry != 0) ans += (carry +'0');

    reverse(ans.begin(),ans.end());
    return ans;
}
};
