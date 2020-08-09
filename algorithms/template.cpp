//
// Created by Petrus on 8/8/2020.
//
#include <bits/stdc++.h>

using namespace std;
#define rep(i, a, b) for(int i = a; i < (b); ++i)
#define all(x) begin(x), end(x)
#define sz(x) (int)(x).size()
typedef long long ll;
typedef pair<int, int> pii;
typedef vector<int> vi;

vector<int> twoSum(vector<int>& nums, int target) {
    unordered_map<int, int> sum;
    vector<int> indices;
    for(int i = 0; i < nums.size(); i++) {
        int rem = target - nums[i];
        if (sum.find(rem) != sum.end()) {
            indices = {sum[rem], i};
        }
        sum[nums[i]] = i;
    }
    return indices;
}

//vector<int> twoSum(vector<int> &numbers, int target)
//{
//    //Key is the number and value is its index in the vector.
//    unordered_map<int, int> hash;
//    vector<int> result;
//    for (int i = 0; i < numbers.size(); i++) {
//        int numberToFind = target - numbers[i];
//
//        //if numberToFind is found in map, return them
//        if (hash.find(numberToFind) != hash.end()) {
//            //+1 because indices are NOT zero based
//            result.push_back(hash[numberToFind] + 1);
//            result.push_back(i + 1);
//            return result;
//        }
//
//        //number was not found. Put it in the map.
//        hash[numbers[i]] = i;
//    }
//    return result;
//}

int main() {
    cin.tie(0)->sync_with_stdio(0);
    cin.exceptions(cin.failbit);

    vector<int> param = {2, 7, 11, 15};

    vector<int> res = twoSum(param, 9);

    std::copy(res.begin(), res.end(), std::ostream_iterator<int>(std::cout, " "));

}
