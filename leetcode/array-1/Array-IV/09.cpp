class Solution {
public:
    int distanceBetweenBusStops(vector<int>& distance, int start, int destination) {
         int n = distance.size();
         int totalDistance = 0;
        
        for (int i = start; i != destination; i = (i + 1) % n) {
            totalDistance += distance[i];
        }
        
        int reversedistance = 0;
        for (int i = start; i != destination; i = (i - 1 + n) % n) {
            reversedistance += distance[(i - 1 + n) % n];
        }
        
        return min(totalDistance, reversedistance);
    }
};
