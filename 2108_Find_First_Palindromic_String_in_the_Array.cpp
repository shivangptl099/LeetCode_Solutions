class Solution {
public:
    int isPalindrome(string str)
    {
        int i,j;
        i = 0;
        j = str.size() - 1;
        while(i < j)
        {
            if(str[i] != str[j]) return 0;
            i++;
            j--;
        }
        return 1;
    }
    string firstPalindrome(vector<string>& words) {
        int i;
        int flag = 0;
        for(i = 0; i < words.size(); i++)
        {  
            flag = isPalindrome(words[i]);
            if(flag == 1) return words[i];
            else continue;
        }
        return "";
    }
};
