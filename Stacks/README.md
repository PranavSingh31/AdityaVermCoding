# Stacks
Aditya Verma Stack notes

1. MAX AREA RECTANGLE IN BINARY MATRIX : 
In this problem, we must find the maximum area of 1 in the shape of a rectangle. The approach would be similar to Max Area Histogram, with layer by layer sent as an array to the MAH function. Also, one more thing, when creating a sum for a particular layer, if we have to make sure when 0 comes, we don't have to sum the PREVIOUS layers, else in 1's we have to do that. MAX AREA HISTOGRAM is recommended prior. 

2. MAX AREA HISTOGRAM : 
In this problem, we must find the maximum area (in form of a quadilateral) a histogram can form. Funda would be to find Nearest Shortest Left and Nearest Shortest Right in both sides for individual buildings(bars), multiplying the magnitude of that building with difference-1 of indexes (of NSR and NSL) and then storing it into MAX function to finally print out maximum.

3. NEAREST GREATEST to LEFT

4. NEAREST GREATEST to RIGHT

5. NEAREST SHORTEST to LEFT

6. NEAREST SHORTEST to RIGHT

7. RAIN WATER TRAPPING : 
In this problem, we gotta find out maximum a histogram type model can hold water if poured from above. This is particularly not a stack problem. We can do this by finding max element from right array that has max element in consecutive spaces starting from right. Similarly, we create a max element from left array. we compare each element indexwise of both array then take minimum of them, subtract magnitude from original array and sum the rest.

8. STOCK SPAN PROBLEM :
Basically we found out how many days earlier the stock was cheaper than the present day.
