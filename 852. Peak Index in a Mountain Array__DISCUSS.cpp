The statement is we are given a mountain array as input. A mountain array is an array which is in increasing order from start till i index and is in decreasing order from i till end.

We have to return the index i such that arr[0] < arr[1] < arr[2] . . . . . arr[i] > arr[i+1] > arr[i+2] ... arr[n-1].

We are supposed to do it in O(log(arr.length) time complexity.

Thr brute force that comes to my mind is traverse the array and check if arr[i] < arr[i+1] , if it is true it means the array is increasing and it is fine till now.

The moment arr[i] > arr[i+1] means it is the breakpoint and that is the index we are supposed to find.

// test case 1 :  0 , 2 , 1 , 0

arr[i] < arr[i+1] till 0 index , the moment we compare arr[1] < arr[2] which is false means we need to return 1 as our answer.

// test case 2 :  1 , 2 , 4 , 5 , 3 , 0

arr[i] < arr[i+1] till 2 index , the moment we compare arr[3] < arr[4] which is false means we need to return 3 as our answer.

This brute force would take O(n) time complexity.

The other approach can be binary search.

// test case : 0 , 2 , 1 , 0

low = 0
high = 3

while ( low < high ) 
   // 0 < 3   first loop
   // 0 < 1   second loop
    mid = (low + high) / 2; 
    // mid = 3/2 = 1
    // mid = 1/2 = 0
    if ( arr [i] < arr[i+1] )   // arr[1] < arr[2] ? No  
                                // arr[0] < arr[1] ? Yes 
    // it means we will find that index somewhere towards right hence,
          low = mid + 1;
           // low = 1
    else 
          high = mid ;         // high = 1

return low ;

// return 1

This took us O(log(n)) time complexity.






