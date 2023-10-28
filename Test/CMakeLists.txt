find_package(GTest REQUIRED)

add_executable(dice_test dice_test.cpp)

target_link_libraries(dice_test
 PRIVATE
  GTest::GTest
  libChance)

add_test(Test dice_test)