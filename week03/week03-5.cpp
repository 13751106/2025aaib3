/// week03-5.cpp
/// LeetCode 學習計畫 1502. Can Make Arithmetic Progression From Sequence
class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& arr) {
        sort(arr.begin(), arr.end()); /// 把陣列 小到大 排好

        int d = arr [1] - arr[0]; /// 兩數差
        for(int i=1; i<arr.size(); i++){
            if(arr[i] - arr[i-1] != d) return false;
        } /// 如果「後向-前向」 不是 d 的話, 就失敗
        return true;
    }
};
