#pragma once

typedef struct _NOD
{
    struct _NOD *Lson;
    struct _NOD *Rson;
    struct _NOD *Dad;
    int Value;
    int Height;
} NOD;

typedef struct _CC_TREE {
    // Members
    NOD *Root;
    int Size;
    int Height;
} CC_TREE;

int TreeCreate(CC_TREE **Tree);
int TreeDestroy(CC_TREE **Tree);

// Duplicates are allowed
int TreeInsert(CC_TREE *Tree, int Value);

// Removes all elements equal to Value
int TreeRemove(CC_TREE *Tree, int Value);

/*
 *  Return:
 *      1   - Tree contains value
 *      0   - Tree does not contain Value
 */
int TreeContains(CC_TREE *Tree, int Value);

int TreeGetCount(CC_TREE *Tree);
int TreeGetHeight(CC_TREE *Tree);
int TreeClear(CC_TREE *Tree);

int TreeGetNthPreorder(CC_TREE *Tree, int Index, int *Value);
int TreeGetNthInorder(CC_TREE *Tree, int Index, int *Value);
int TreeGetNthPostorder(CC_TREE *Tree, int Index, int *Value);
