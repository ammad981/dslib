#include <iostream>
#include "list.h"
#include "dstack.h"
#include "dqueue.h"
#include "squeue.h"
#include "sstack.h"

struct Data {
    int foo;
    char bar;
};

int main() {
    List<Data> list();
    DStack<Data> dstack();
    DQueue<Data> dqueue();

    return 0;
}
