// Vectors

// array we have {11,3,23,7} --> 0,1,2,3 index

//myVect.push_back(17); --> {11,3,23,7,17} --> 0,1,2,3,4
//myVect.pop_back(); --> {11,3,23,7} --> 0,1,2,3

/* adding and removing an item from a vector is 0(1) */

//myVect.erase(myVect.begin()); --> {3,23,7} --> {0,1,2}
// index doesn't remain same
//myVect.insert(myVect.begin(),11); --> {11,3,23,7} --> {0,1,2,3}
// again back to same index

/* it doesn't matter either you are removing or adding it's gonnabe 0(n) */

//myVect.insert(myVect.begin()+1,99); --> {11,99,3,23,7} --> {0,1,2,3,4}
//0(1/2 n) --> drop constant --> 0(n)

//find 7 {11,3,23,7} --> {0,1,2,3}

/* 
looking by value is 0(n)
looking by index is 0(1)
*/

    
