class Solution {
    public int numRescueBoats(int[] people, int limit) {
        Arrays.sort(people);
        
        int front = 0, end = people.length - 1, rs = 0;
        
        while (front <= end) {
            if (people[front] + people[end] <= limit) front += 1;
            end -= 1;
            rs += 1;
        }
        
        return rs;
    }
}