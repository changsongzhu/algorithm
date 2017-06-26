/**

Bubble Sorting

Bubble Sorting is a simple sorting algorithm. 
It is a comparison-based algorithm in which each pair of adjacent elements is compared and the elements are swapped if they are not in order. 
This algorithm is not suitable for large data sets as its average and worst case complexity are of O(n2).

**/
void bubbleSorting(vector<int> nums)
{
   int n=nums.size();
   for(int i=0;i<n;i++)
   {
      for(int j=1;j<n-i;i++)
      {
         if(nums[j]<nums[j-1])
             swap(nums[j], nums[j-1]);
      }
   }
}

void bubbleSorting(ListNode *head)
{

}
