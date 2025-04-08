# Binary Trees Project

This repository contains implementations of various binary tree operations and algorithms, part of the Holberton School curriculum. Each file addresses specific binary tree functionalities, demonstrating concepts from basic tree creation to advanced tree operations.

## Project Overview

Binary trees are hierarchical data structures where each node has at most two children, referred to as the left child and right child. This project explores various tree operations including creation, traversal, property checking, and tree manipulation.

## Tasks

### Basic Binary Tree Operations

1. **0-binary_tree_node.c**: Creates a binary tree node
   - Function that creates a new binary tree node with a given value

2. **1-binary_tree_insert_left.c**: Inserts a node as the left-child
   - Inserts a node as the left-child of another node, handling existing left children

3. **2-binary_tree_insert_right.c**: Inserts a node as the right-child
   - Inserts a node as the right-child of another node, handling existing right children

4. **3-binary_tree_delete.c**: Deletes an entire binary tree
   - Recursively deletes all nodes in a binary tree

5. **4-binary_tree_is_leaf.c**: Checks if a node is a leaf
   - Returns 1 if node is a leaf (has no children), 0 otherwise

6. **5-binary_tree_is_root.c**: Checks if a node is a root
   - Returns 1 if node is a root (has no parent), 0 otherwise

### Tree Traversal

7. **6-binary_tree_preorder.c**: Pre-order traversal
   - Goes through a binary tree using pre-order traversal (root, left, right)

8. **7-binary_tree_inorder.c**: In-order traversal
   - Goes through a binary tree using in-order traversal (left, root, right)

9. **8-binary_tree_postorder.c**: Post-order traversal
   - Goes through a binary tree using post-order traversal (left, right, root)

### Tree Properties

10. **9-binary_tree_height.c**: Measures the height of a binary tree
    - Returns the height (longest path from root to leaf)

11. **10-binary_tree_depth.c**: Measures the depth of a node
    - Returns the depth of a node (distance from root)

12. **11-binary_tree_size.c**: Measures the size of a binary tree
    - Returns the number of nodes in a tree

13. **12-binary_tree_leaves.c**: Counts the leaves in a binary tree
    - Returns the number of leaf nodes (nodes with no children)

14. **13-binary_tree_nodes.c**: Counts the nodes with at least 1 child
    - Returns the count of non-leaf nodes

15. **14-binary_tree_balance.c**: Measures the balance factor
    - Calculates the height difference between left and right subtrees

16. **15-binary_tree_is_full.c**: Checks if a binary tree is full
    - A tree is full if all nodes have either 0 or 2 children

17. **16-binary_tree_is_perfect.c**: Checks if a binary tree is perfect
    - A perfect tree has all interior nodes with two children and all leaves at the same level

18. **17-binary_tree_sibling.c**: Finds the sibling of a node
    - Returns a pointer to the sibling node

19. **18-binary_tree_uncle.c**: Finds the uncle of a node
    - Returns a pointer to the uncle node (sibling of parent)

## Data Structures

The following structures are used throughout the project:

```c
/**
 * struct binary_tree_s - Binary tree node
 *
 * @n: Integer stored in the node
 * @parent: Pointer to the parent node
 * @left: Pointer to the left child node
 * @right: Pointer to the right child node
 */
struct binary_tree_s
{
    int n;
    struct binary_tree_s *parent;
    struct binary_tree_s *left;
    struct binary_tree_s *right;
};

typedef struct binary_tree_s binary_tree_t;
```

## Compilation

All files are compiled using:
```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o binary_trees
```

## Author

Stephane and Guillaume
- Holberton School