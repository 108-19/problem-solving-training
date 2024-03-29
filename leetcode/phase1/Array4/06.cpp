class Solution {
public:
    double averageWaitingTime(vector<vector<int>>& customers) {
       double totalWaitTime = 0.0; 
        int currentTime = 0; 
        int n = customersSize; 
        
        for (int i = 0; i < n; ++i) {
            int arrivalTime = customers[i][0]; 
            int preparationTime = customers[i][1]; 
            
           
            int waitTime = max(currentTime, arrivalTime) + preparationTime - arrivalTime;
            
            totalWaitTime += waitTime; 
            
            currentTime = max(currentTime, arrivalTime) + preparationTime;
        }
        
        return totalWaitTime / n;  
    }
};
