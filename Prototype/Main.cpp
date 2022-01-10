#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunknown-pragmas"
#pragma ide diagnostic ignored "UnusedValue"
#pragma ide diagnostic ignored "UnusedLocalVariable"

#include "MessagePrototype.h"

int main() {
    MessagePrototype MsgProto;
    Message *testMessage = new NativeMessage();
    Message *testMessage2 = MsgProto.Clone(testMessage);
    return 0;
}

#pragma clang diagnostic pop
