#include "CoreManager.h"
#include <gtest/gtest.h>

TEST(CoreManagerTest, Initialization) {
    CoreManager coreManager(4);
    EXPECT_NO_THROW(coreManager.printCoreState());
}

TEST(CoreManagerTest, GetBestCore) {
    CoreManager coreManager(2);
    Core& bestCore = coreManager.getBestCore();
    EXPECT_EQ(bestCore.getCoreId(), 1);
}
