class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
     int n=arr.size();
    int large=arr[0];
    int second_large=-1;
    int i;
    for (i = 0; i < n; i++) 
    {
        if (arr[i] > large) 
        {
            second_large = large;
            large = arr[i];
        }
 
        else if (arr[i] > second_large && arr[i] != large) 
        {
            second_large = arr[i];
        }
    }
    return second_large;                
}
        
};