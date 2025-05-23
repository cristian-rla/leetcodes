class Solution {
public:
    int maxProfit(vector<int>& prices) {

        // ignorar todos los que sean menores al mayor (después del mayor), hasta encontrar a uno que es menor al menor, que será ignorado si la diferencia entre el mayor y el menor actual es mayor al que se acaba de encontrar. 
        if (prices.size() < 2) return 0;
        int high = distance(prices.begin(), std::max_element(prices.begin() + 1, prices.end())),
            low = 0,
            res = prices[high] - prices[low],
            i = low;
        
        while (i < high){
            if(prices[i] < prices[low]){
                low = i;
                res= prices[high] - prices[low];
            }
            i++;
        }

        while (i < prices.size()){            
            if (prices[i] < prices[low]) {
                low = i;
            }      
            if (prices[i] - prices[low] > res){
                high = i;
                res = prices[high] - prices[low];
            }
            i++;
        }

        return (res > 0) ? res : 0; 
    }
};