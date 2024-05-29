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

TEST(ProgramTest, RunProgramMainLogic) {
    // Перенаправляем cout для захвата вывода
    std::stringstream buffer;
    std::streambuf* prevcoutbuf = std::cout.rdbuf(buffer.rdbuf());

    // Выполняем тестируемую функцию
    RunProgramMainLogic();

    // Возвращаем стандартный вывод на место
    std::cout.rdbuf(prevcoutbuf);

    // Проверяем содержимое вывода
    std::string output = buffer.str();
    EXPECT_TRUE(output.find("James") != std::string::npos); // Проверка атаки Forwards
    EXPECT_TRUE(output.find("Maddie") != std::string::npos); // Проверка атаки Center
    EXPECT_TRUE(output.find("YaoMing attack") != std::string::npos);  // Проверка атаки Translator
    EXPECT_TRUE(output.find("YaoMing defense") != std::string::npos); // Проверка защиты Translator
}
