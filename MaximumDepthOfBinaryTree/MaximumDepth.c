//
// Created by zxw on 18-1-28.
//

#include <stdio.h>
#include <string.h>
int PostTreeDepth(BiTree root) {
    int hl, hr, max;
    if(root!=NULL)
    {
        hl=PostTreeDepth(root->lchild);
        hr=PostTreeDepth(root->rchild);
        max=hl>hr?hl:hr;
        return max+1;
    }
    else
        return 0;
}
