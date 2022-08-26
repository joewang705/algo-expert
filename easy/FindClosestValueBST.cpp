class BST {
public:
  int value;
  BST *left;
  BST *right;

  BST(int val);
  BST &insert(int val);
};

int findClosestValueInBst(BST *tree, int target) {
  // Write your code here.
  int closest = tree->value;
  BST *currentNode = tree;
  
  while (currentNode != nullptr){
    if(abs(currentNode->value - target) < abs(closest - target)){
      closest = currentNode->value;
    } 
    
    if (currentNode->value > target){
      currentNode = currentNode->left;
    } else if (currentNode->value < target){
      currentNode = currentNode->right;
    } else{
      break;
    }
  }

  return closest;
}
