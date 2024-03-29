class Solution {
public:
    int maximumPopulation(vector<vector<int>>& logs) {
        const int START_YEAR = 1950;
        const int END_YEAR = 2050;
        int population[101] = {0}; // 101 years from 1950 to 2050

        for (int i = 0; i < logs.size(); ++i) {
            int startYear = logs[i][0];
            int endYear = logs[i][1];
            for (int year = startYear; year < endYear; ++year) {
                ++population[year - START_YEAR];
            }
        }

        int maxPopulation = 0;
        int maxPopulationYear = START_YEAR;

        for (int year = START_YEAR; year <= END_YEAR; ++year) {
            if (population[year - START_YEAR] > maxPopulation) {
                maxPopulation = population[year - START_YEAR];
                maxPopulationYear = year;
            }
        }

        return maxPopulationYear;
    }
};
