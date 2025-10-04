//Given an array of integers citations where citations[i] is the number of citations a researcher received for their ith paper, return the researcher's h-index.
class Solution {
public:
    int hIndex(vector<int>& citations) {
        sort(citations.rbegin(),citations.rend());
        int h=0;
        while(h<citations.size() && citations[h]>h){
            h++;
        }
        return h;
    }
};
