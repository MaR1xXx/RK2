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


TEST(RunProgramMainLogicTest, FunctionBehavior) {
    // Заглушка для проверки вывода в stdout
    testing::internal::CaptureStdout();

    // Вызов тестируемой функции
    RunProgramMainLogic();

    // Получение и проверка вывода
    std::string output = testing::internal::GetCapturedStdout();
    EXPECT_TRUE(output.find("James") != std::string::npos);
    EXPECT_TRUE(output.find("Maddie") != std::string::npos);
    EXPECT_TRUE(output.find("YaoMing") != std::string::npos);

    // Проверяем, что вызывались и другие методы
    EXPECT_TRUE(output.find("defense") != std::string::npos); // Пример проверки вызова метода defense
}
