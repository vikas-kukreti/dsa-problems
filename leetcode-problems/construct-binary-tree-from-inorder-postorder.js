function TreeNode(val, left, right) {
  this.val = val === undefined ? 0 : val;
  this.left = left === undefined ? null : left;
  this.right = right === undefined ? null : right;
}

var buildTree = function (inorder, postorder) {
  if (postorder.length === 0 || inorder.length === 0) return null;
  const val = postorder.pop();
  const node = new TreeNode(val);
  const index = inorder.indexOf(val);

  const rightInorder = inorder.slice(index + 1);
  const leftInorder = inorder.slice(0, index);

  node.right = buildTree(rightInorder, postorder);
  node.left = buildTree(leftInorder, postorder);
  return node;
};

const root = buildTree([9, 3, 15, 20, 7], [9, 15, 7, 20, 3]);

console.log(JSON.stringify(root, null, 2));
