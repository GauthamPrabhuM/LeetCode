class Solution {
public:
    bool searchMatrix(vector<vector<int>> &m, int t) {
 		if (!m.size() || !m[0].size()) return false;
 		int row, l = 0, r = m.size() - 1, mid;
        while (l < r) {
            mid = (l + r) / 2;
             if (m[mid].back() < t) l = mid + 1;
             else if (m[mid][0] > t) r = mid - 1;
             else {
                l = mid;
                break;
            };
        }
         row = l;
         l = 0;
        r = m[0].size() - 1;
        while (l <= r) {
            mid = (l + r) / 2;
             if (m[row][mid] < t) l = mid + 1;
             else if (m[row][mid] > t) r = mid - 1;
             else return true;
        }
        return false;
    }
};
