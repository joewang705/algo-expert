// This is the class of the input root.
// Do not edit it.
class BinaryTree {
    constructor(value) {
      this.value = value;
      this.left = null;
      this.right = null;
    }
  }
  
  function branchSums(root) {
    // Write your code here.
  
    let sums = [];
  
    calcBranchSum(root, 0, sums);
    return sums;
  }
  
  function calcBranchSum(node, runningSum, sums) {
    if (!node) return;
  
    let newRunningSum = runningSum + node.value;
    if (!node.left && !node.right){
      sums.push(newRunningSum);
      return;
    }
  
    calcBranchSum(node.left, newRunningSum, sums);
    calcBranchSum(node.right, newRunningSum, sums);
    
  }
  
  // Do not edit the lines below.
  exports.BinaryTree = BinaryTree;
  exports.branchSums = branchSums;