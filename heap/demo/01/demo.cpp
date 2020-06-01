//
// Created by chugang on 2020/6/1.
//

# include <iostream>
# include <functional>
# include <vector>
# include <algorithm>

using namespace std;

void printVec(vector<int> nums) {
    for (int i = 0; i < nums.size(); ++i)
        cout << nums[i] << " ";
    cout << endl;
}

int main(void) {
    int nums_temp[] = {8, 3, 4, 8, 9, 2, 3, 4, 10};
    vector<int> nums(nums_temp, nums_temp + 9);
    cout << "make_heap之前: ";
    printVec(nums);

    cout << "(默认(less))make_heap: ";
    make_heap(nums.begin(), nums.end());
    printVec(nums);
    // todo 将堆顶元素（即为数组第一个位置）和数组最后一个位置对调，然后你可以调用数组pop_back，删除这个元素
    // todo 注意，pop_heap中的_Compare和make_heap中的_Compare参数必须是一致的，不然会失败
    pop_heap(nums.begin(), nums.end());
    cout << "pop_heap后：";
    printVec(nums);
    nums.pop_back();
    cout << "pop_back后：";
    printVec(nums);
//
//    cout << "(less)make_heap: ";
//    make_heap(nums.begin(), nums.end(), less<int>());
//    printVec(nums);
//
//    cout << "(greater)make_heap: ";
//    make_heap(nums.begin(), nums.end(), greater<int>());
//    printVec(nums);
//
//    cout << "此时，nums为小顶堆 greater" << endl;
//    cout << "push_back(3)" << endl;
//    nums.push_back(3);
//    cout << "默认(less)push_heap 此时push_heap失败: ";
//    push_heap(nums.begin(), nums.end());
//    printVec(nums);
//    cout << "push_heap为greater 和make_heap一致，此时push_heap成功: ";
//    push_heap(nums.begin(), nums.end(), greater<int>());
//    printVec(nums);
//    cout << "(greater,不然会失败)pop_heap: ";
//    pop_heap(nums.begin(), nums.end(), greater<int>());
//    printVec(nums);
//    cout << "pop_back(): ";
//    nums.pop_back();
//    printVec(nums);
}