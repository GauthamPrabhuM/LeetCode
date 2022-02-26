class Solution {
public:
double average(vector<int>& salary) {
	sort(salary.begin(), salary.end());
	salary.pop_back();
	salary.erase(salary.begin());
	double sum=0;
	for(auto i : salary){
		sum += i;
	}
	return (sum/salary.size());
}

};
