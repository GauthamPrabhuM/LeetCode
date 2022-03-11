kadanes algo kinda, find minimum element and maximise profit
```    int maxProfit(vector<int>& prices) {
int minElement = INT_MAX;int profit = 0;
for(auto i : prices){minElement = min(minElement,i);
profit = max(profit,i-minElement);}
return profit;  ```
​