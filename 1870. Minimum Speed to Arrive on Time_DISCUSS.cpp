We are given 'hour' which is time to reach the office. To reach office we must take n trains in sequential order.
Also, we are given an array 'dist' which contains distance that every ith will cover.

A train can depart at integer time only. For example : If 1st train takes 0.5 hours in a ride, then we have to wait for an additional 0.5 hours,
then only we will be able to take the 2nd train.

We have to return minimum speed each train should run at so that we reach on time at office.
We are given that speed will not exceed 1e7.

We can think of this problem using binary search.

ALGORITHM :
  
1. The minimum value of speed can be 1 and maximum can be 10000007. So, low can be 1 and high can be 10000007.
2. We will find the mid value. Mid is basically speed only. We have to check if we can reach on time with this speed. If yes, we will update the mid and we will continue the search in left half, high = mid - 1. 
3. If it is not possible to reach the office with the speed 'mid' then we will search in right half, low = mid + 1.

