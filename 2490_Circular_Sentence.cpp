class Solution {
public:
    bool isCircularSentence(string sentence) {
        if(sentence[0] != sentence[sentence.length() - 1]) return false;
        char last = sentence[0];
        int i = 1;
        while(i < sentence.length()){
            if(sentence[i] == ' '){
                if(sentence[i + 1] != last) return false;
                i++;
            }
            last = sentence[i];
            i++;
        }
        return true;
    }
};
