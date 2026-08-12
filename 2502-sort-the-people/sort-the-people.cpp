class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        int n=names.size();

        // insertion sort

        for(int i=1;i<n;i++){
            int curr=heights[i];
            string current=names[i];
            int prev=i-1;
            while(prev>=0 && heights[prev]<curr){ // descending order
                names[prev+1]=names[prev];
                heights[prev+1]=heights[prev];
                prev--;
            }
            names[prev+1]=current;
            heights[prev+1]=curr;
        }

        return names;
        
    }
};