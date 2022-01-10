#include "UserGenerator.h"

int main() {
    UserGenerator usergen;
    User *testUser;
    testUser = usergen.CreateUser(UserType::TraderEnum, "TestUser", "123");
    testUser->ViewDetails();
    return 0;
}
