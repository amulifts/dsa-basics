/*  0(log n) */

// int a[] = { 1,2,3,4,5,6,7,8 } --> quickest way to get to 1
// cut the array in half and see it is in 1st half or second half i.e {1,2,3,4} {5,6,7,8}
// it is not in second half so we don't have to look at any of those numbers we have {1,2,3,4}
// break it into 2 half again i.e {1,2} {3,4}
// not in second half so we don't have to look at any of those numbers we have {1,2}
// break it into 2 hald again i.e {1} {2}
// not in second half so we don't have to look at any of those numbers we have {1}

// 3 steps took to find number 1 --> we had 8 items in an array

// 2^3 = 8 --> log(base 2)8 = 3 

// log(base 2)1,073,741,824 = 31 --> cut half 31 times to get number 1 
