class Solution {
public:
    int minMovesToSeat(vector<int>& seats, vector<int>& students) {
        int n = seats.size();

        sort(seats.begin(), seats.end());
        sort(students.begin(), students.end());

        int x = 0;

        for(int i = 0; i < n; i++ ){
            int diff = students[i] - seats[i];
            x = x + abs(diff);
        }

        return x;
    }
};
