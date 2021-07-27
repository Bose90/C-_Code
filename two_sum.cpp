#include<iostream>
#include<vector>
#include<algorithm>
#include <bits/stdc++.h>
using namespace std;

vector<int> two_sum(vector<int> &arr,int target)
{
    int i=0;
    vector<int> new_arr;
    for(i=0;i<arr.size();i++)
    {
       int temp = target - arr[i];
       vector<int>::iterator it = find(arr.begin(),arr.end(),temp);
       if(it != arr.end())
       {
           int index = it - arr.begin();
           if(index != i)
           {
               new_arr.push_back(i);
               new_arr.push_back(index);
               return new_arr;
           }
       }
    }
    new_arr.push_back(-1);
    new_arr.push_back(-1);
    return new_arr;

}
int main()
{
    int num;
    int target;
    cin>>num;
    vector<int> arr(num);
    for(int i=0;i<num;i++)
    cin>>arr[i];
    cin>>target;
    vector<int> res;
    res = two_sum(arr,target);
    cout<<"["<<res[0]<<","<<res[1]<<"]"<<endl;

}
