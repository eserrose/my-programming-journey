#include <iostream>
#include <string>
using namespace std;

struct secondaryNode
{
	int info;
	secondaryNode * next;
};

struct mainNode
{
	mainNode * down;
	secondaryNode * right;
};

int findSum(mainNode** ptrPtrHead){
    mainNode* traverse = *ptrPtrHead;
    int sum = 0;

    while(traverse){
        secondaryNode* sequence = traverse->right;
        while(sequence){
            sum += sequence->info;
            sequence = sequence->next;
        }
        traverse = traverse->down;
    }

    return sum;
}

int main(){
    mainNode* main = new mainNode();
    mainNode* a = new mainNode();
    mainNode* b = new mainNode();
    secondaryNode* c = new secondaryNode();
    secondaryNode* d = new secondaryNode();
    secondaryNode* e = new secondaryNode();
    secondaryNode* f = new secondaryNode();
    c->info = 1;
    c->next = d;
    d->info = 4;
    d->next = e;
    e->info = 3;
    e->next = nullptr;
    f->info = 7;
    f->next = nullptr;


    main->down = a;
    a->down = b;
    main->right = c;
    a->right = f;
    b->right = nullptr;

    cout << findSum(&main);
}