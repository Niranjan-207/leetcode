// Last updated: 4/4/2026, 11:07:23 PM
class Solution {
    public int lengthOfLastWord(String s) {
        String st=s.stripTrailing();
        int n = st.length();
        int count=0;
        for(int i=n-1;i>=0;i--){
            if(st.charAt(i) != ' '){
                count++;
            }else{
                break;
            }
        }
        return count;
    }
}