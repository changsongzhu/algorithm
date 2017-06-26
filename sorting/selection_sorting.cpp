/**
Selection Sorting

**/

void selection_sorting(vector<int> &nums)
{
   for(int i=0;i<nums.size();i++)
   {
      int mn=INT_MAX;
      int idx=-1;
      for(int j=i;j<nums.size();j++)
      {
          if(nums[i]<mn)
          {
             mn=nums[i];
             idx=i;
          }
      }
      swap(nums[i], nums[idx]);
   }
}
