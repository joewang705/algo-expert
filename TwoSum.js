function twoNumberSum(array, targetSum) {
    // Write your code here.
      let pair = []
      const map = new Map();
      
      // hashmap to check if target value is in the array while iterating through each element
      array.forEach(number => {
          if(number != targetSum - number){
              map.set(number, targetSum - number);
          }
      });
      
      for (let i = 0; i < array.length; i++){
          if (map.has(targetSum - array[i])){
              pair.push(array[i], targetSum - array[i]);
              break;
          }
      };
      
      return pair;						
  }
      
  
  // Do not edit the line below.
  exports.twoNumberSum = twoNumberSum;