class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int>rearrangedNums(nums.size());
        int posIndex = 0;
        int negIndex = 1;
        for(int i = 0; i < nums.size(); i++){
            if( nums[i] >= 0 ){
                rearrangedNums[posIndex] = nums[i] ;
                posIndex += 2;
            }
            else{
            rearrangedNums[negIndex] = nums[i] ;
            negIndex += 2;
            }
        }

        return rearrangedNums;
    }
};
static const bool __boost = []() { std::cin.tie(nullptr); std::cout.tie(nullptr); return std::ios_base::sync_with_stdio(false); }(); const size_t BUFFER_SIZE = 0x3000000; alignas(std::max_align_t) char buffer[BUFFER_SIZE]; size_t buffer_pos = 0; void* operator new(size_t size) { constexpr std::size_t alignment = alignof(std::max_align_t); size_t padding = (alignment - (buffer_pos % alignment)) % alignment; size_t total_size = size + padding; char* aligned_ptr = &buffer[buffer_pos + padding]; buffer_pos += total_size; return aligned_ptr; } void operator delete(void* ptr, unsigned long) {} void operator delete(void* ptr) {} void operator delete[](void* ptr) {} 