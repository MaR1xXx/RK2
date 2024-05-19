#include <gtest/gtest.h>
#include <main.cpp>

TEST(TranslatorTest, Constructor) {
  Translator* player = new Translator("Ivan Ivanov");
  
  EXPECT_EQ(player->getName(), "Ivan Ivanov");
}

TEST(PlayerTest, Defense) {

  Player* player = new Center("Jane Doe");


  player->defense();


  EXPECT_EQ(player->getName(), "Jane Doe");
}

TEST(PlayerTest, Attack) {
  Player* player = new Forwards("John Doe");

  player->attack();

  EXPECT_EQ(player->getName(), "John Doe");
}