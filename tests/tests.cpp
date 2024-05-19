#include <gtest/gtest.h>
#include <main.cpp>

TEST(ForwardsTest, Attack) {
  Forwards player("John");
  player.attack();
  EXPECT_EQ(player.name, "John");
  EXPECT_STREQ(player.getName(), "John");
}

TEST(CenterTest, Defense) {
  Center player("Jane");
  player.defense();
  EXPECT_EQ(player.name, "Jane");
  EXPECT_STREQ(player.getName(), "Jane");
}

TEST(TranslatorTest, Attack) {
  Translator player("Ivan");
  player.attack();
  EXPECT_STREQ(player.fc->getName(), "Ivan");
}