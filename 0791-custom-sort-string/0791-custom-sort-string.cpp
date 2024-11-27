string orderCopy;
class Solution {
public:
    
    static bool cmp(char a, char b) {
    
 //hume sirf order wali string me a and b char kaha , kaise exists karta h, 
        //same vohi replicate krna h 

        return (orderCopy.find(a) < orderCopy.find(b));
    }
    string customSortString(string order, string s) {
        orderCopy = order;
        sort(s.begin(), s.end(), cmp);
        return s;
    }
};