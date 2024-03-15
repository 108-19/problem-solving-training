class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
       int studentCount = students.size();
        int sandwichCount = sandwiches.size();
        int attempts = 0; 
        
        while (attempts < studentCount) {
            if (students[0] == sandwiches[0]) {
                students.erase(students.begin());  
                sandwiches.erase(sandwiches.begin());  
                --studentCount;
                --sandwichCount;
                attempts = 0;  
            } else {
                students.push_back(students[0]);  
                students.erase(students.begin()); 
                ++attempts;  
            }
        }
        
        return studentCount; 
    }
};
