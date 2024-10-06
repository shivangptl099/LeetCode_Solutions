class Solution {
public:
    bool areSentencesSimilar(string sentence1, string sentence2) {
        int m = sentence1.length();
        int n = sentence2.length();
        if(m == n){
            if(sentence1 == sentence2) return true;
            else return false;
        }
        sentence1 += " ";
        sentence2 += " ";
        deque<string> a,b;
        string temp = "";
        for(int i = 0; i < sentence1.length(); i++){
            if(sentence1[i] == ' '){
                a.push_back(temp);
                temp = "";
            } else {
                temp += sentence1[i];
            }
        }
        for(int i = 0; i < sentence2.length(); i++){
            if(sentence2[i] == ' '){
                b.push_back(temp);
                temp = "";
            } else {
                temp += sentence2[i];
            }
        }
        while(a.size() && b.size() && a.front() == b.front()){
            a.pop_front();
            b.pop_front();
        }
        while(a.size() && b.size() && a.back() == b.back()){
            a.pop_back();
            b.pop_back();
        }
        return (a.size() == 0 || b.size() == 0);
    }
};
