#include <iostream>
#include "list.h"
#include "stack.h"
#include "queue.h"

struct Data {
    int foo;
    char bar;
};

int main() {
    List<Data> list();
    Stack<Data> stack();
    Queue<Data> queue();

    return 0;
}
