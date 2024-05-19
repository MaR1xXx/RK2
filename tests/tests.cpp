#include <gtest/gtest.h>
#include <main.cpp>

TEST(TranslatorTest, Constructor) {
  Translator* player = new Translator("");
  
  EXPECT_EQ(player->getName(), "");
}

TEST(PlayerTest, Defense) {

  Player* player = new Center("Jane Doe");


  string output = player->defense();


  EXPECT_EQ(output, "Jane Doe");
}

TEST(PlayerTest, Attack) {
  Player* player = new Forwards("John Doe");

  string output = player->attack();

  EXPECT_EQ(output, "John Doe");
}