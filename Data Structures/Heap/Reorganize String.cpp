class Solution {
public:
    struct valueCompare{
        char operator()(pair<char, int>&x, pair<char, int>&y){
            return y.second>x.second;
        }
    };
    string reorganizeString(string s) {
        unordered_map<char, int>hash_map;
        for (char ch:s){
            hash_map[ch]++;
        }
        priority_queue<pair<char, int>, vector<pair<char, int>>, valueCompare>MaxHeap;
        for (auto element:hash_map){
            MaxHeap.push(element);
        }
        pair<char, int>prev(-1,-1);
        string res="";
        while(!MaxHeap.empty()){
            pair<char, int>entry=MaxHeap.top();
            MaxHeap.pop();
            res+=entry.first;
            if (prev.second>0){
                MaxHeap.push(prev);
                    
            }
            prev=entry;
            prev.second--;
            
        }
        if (res.length()==s.length()){
            return res;
        }
        else{
            return "";
            }
        
    }
};
