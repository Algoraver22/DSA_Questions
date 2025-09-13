class Solution {
public:
    long long maxWeight(vector<int>& pizzas) {
        int n = pizzas.size();
        sort(pizzas.begin(), pizzas.end(), greater<int>());
        
        int totalDays = n / 4;
        int oddDays = (totalDays + 1) / 2;
        int evenDays = totalDays / 2;
        
        long long totalWeight = 0;
        int pizzaIndex = 0;
        
        for (int i = 0; i < oddDays; i++) {
            totalWeight += pizzas[pizzaIndex];
            pizzaIndex++;
        }
        
        for (int i = 0; i < evenDays; i++) {
            pizzaIndex++;
            totalWeight += pizzas[pizzaIndex];
            pizzaIndex++;
        }
        
        return totalWeight;
    }
};
