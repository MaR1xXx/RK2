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
    // Redirect cout to capture output
    std::stringstream buffer;
    std::streambuf* prevcoutbuf = std::cout.rdbuf(buffer.rdbuf());

    // Run the function which includes creations and method calls
    RunProgramMainLogic();

    // Restore cout to its original state
    std::cout.rdbuf(prevcoutbuf);

    // Check if the correct outputs were produced
    // Assuming that 'attack' and 'defense' methods output some identifiable text
    std::string output = buffer.str();
    EXPECT_TRUE(output.find("James") != std::string::npos);  // Check for Forwards attack
    EXPECT_TRUE(output.find("Maddie") != std::string::npos); // Check for Center attack
    EXPECT_TRUE(output.find("YaoMing attack") != std::string::npos);  // Check for Translator attack
    EXPECT_TRUE(output.find("YaoMing defense") != std::string::npos); // Check for Translator defense
}
