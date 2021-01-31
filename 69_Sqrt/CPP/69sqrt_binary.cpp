//二分法
//库函数
//牛顿法
[[maybe_unused]] static const auto _ = []() {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	return 0;
}();
//二分法
class Solution {
public:
    int mySqrt(int x) {
        int left=1, right=x;
        while(left <= right){
            //int mid = (left + right)/2;//不要这么写，right如果很大的话，结果会超过int的范围
            int mid = left + (right - left) / 2;
            if(mid == x/mid){
                return mid;
            }else if(mid > x/mid){
                right = mid - 1;
            }else{
                left = mid + 1;
            }
        }
        return right;
    }
};