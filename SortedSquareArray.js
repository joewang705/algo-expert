function sortedSquaredArray(array) {
    // Write your code here.
    let sortedArray = [];
      let i = 0;
      let j = array.length - 1;
      
      // starting with pointers from both ends, check which one is larger in absolute value and push to back of sorted array
      while(!(i>j)){
          if(Math.abs(array[i]) >= Math.abs(array[j])){
              sortedArray.unshift(array[i]*array[i]);
              i++;
          } else{
              sortedArray.unshift(array[j]*array[j]);
              j--;
          }
      }
      
    return sortedArray;
  }
  
  // Do not edit the line below.
  exports.sortedSquaredArray = sortedSquaredArray;