int maxProfit(int* prices, int pricesSize){
    // initialize the auxillary array
    int aux[pricesSize];
    for(int i = 0 ; i < pricesSize ; i++){
        aux[i] = 0;
    }
    
    int max = prices[pricesSize-1];
    for(int i = pricesSize-1 ; i >=0 ; i--){
        if(prices[i] > max){
            max = prices[i];
        }
        aux[i] = max;
    }
    
    int maxProfit = -1;
    for(int i = 0 ; i < pricesSize ;i++){
        if(aux[i] - prices[i] > maxProfit){
            maxProfit = aux[i] - prices[i];
        }
    }
    return maxProfit;
}
