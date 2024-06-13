class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        int a = arr1.size();
        int b = arr2.size();
        int x = 0;

        for(int i = 0; i < b; i++){
            for (int j = 0; j < a; j++){
                if(arr2[i] == arr1[j]){
                    swap(arr1[x] , arr1[j]);
                    x++;
                }
            }
        }


        sort(arr1.begin() + x , arr1.end());

        return arr1;
    }
};
