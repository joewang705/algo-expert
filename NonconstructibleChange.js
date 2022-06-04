function nonConstructibleChange(coins) {
    // Write your code here.
  
    // coin = [5, 7. 1. 1. 2. 3. 22] => return 20
    coins.sort((a,b) => a - b);
  
    let change = 0;
  
    for (const coin of coins){
      if (coin > change + 1){
        return change + 1;
      }
  
      change += coin;
    }
    
    return change + 1;
  }
  
  // Do not edit the line below.
  exports.nonConstructibleChange = nonConstructibleChange;