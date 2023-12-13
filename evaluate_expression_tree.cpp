using namespace std;

// This is an input class. Do not edit.
class BinaryTree {
 public:
  int value;
  BinaryTree* left = nullptr;
  BinaryTree* right = nullptr;

  BinaryTree(int value) { this->value = value; }
};

int evaluateExpressionTree(BinaryTree* tree) {
  if (!tree->left && !tree->right) {
    return tree->value;
  }

  int leftSubResult = evaluateExpressionTree(tree->left),
      rightSubResult = evaluateExpressionTree(tree->right);

  switch (tree->value) {
    case -1:
      return leftSubResult + rightSubResult;
    case -2:
      return leftSubResult - rightSubResult;
    case -3:
      return leftSubResult / rightSubResult;
    case -4:
      return leftSubResult * rightSubResult;
  }
}
