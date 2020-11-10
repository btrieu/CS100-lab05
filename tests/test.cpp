#include "gtest/gtest.h"
#include "../header/rectangle.hpp"

TEST(ConstructorTest, PositiveInput) {
	Rectangle rect1 = Rectangle(4, 4);
        Rectangle rect2 = Rectangle(20, 20);
        EXPECT_EQ(16, rect1.perimeter());
        EXPECT_EQ(80, rect2.perimeter());
}

TEST(ConstructorTest, NegativeInput) {
	Rectangle rect1 = Rectangle(-1, -48);
	EXPECT_EQ(98, rect1.perimeter());
}

TEST(ConstructorTest, NoParameters) {
	Rectangle rect1 = Rectangle();
	EXPECT_EQ(0, rect1.perimeter());
	rect1.set_width(4);
	rect1.set_height(7);
	EXPECT_EQ(28, rect1.area());	
}

TEST(RectanglePerimeter, Square) {
	Rectangle rect1 = Rectangle(4, 4);
        Rectangle rect2 = Rectangle(20, 20);
        EXPECT_EQ(16, rect1.perimeter());
        EXPECT_EQ(80, rect2.perimeter());
}

TEST(RectanglePerimeter, Rectangle) {
	Rectangle rect1 = Rectangle(4, 7);
        Rectangle rect2 = Rectangle(242, 20);
        EXPECT_EQ(22, rect1.perimeter());
        EXPECT_EQ(484+40, rect2.perimeter());	
}

TEST(RectanglePerimeter, DefaultConstructor) {
	Rectangle rect1 = Rectangle();
        EXPECT_EQ(0, rect1.perimeter());
}

TEST(RectanglePermimeter, Float) {
        Rectangle rect1 = Rectangle(4.34, 7.69);
        Rectangle rect2 = Rectangle(2.42, 2.00000086123);
        EXPECT_NEAR(24.06, rect1.perimeter(), 0.1);
        EXPECT_NEAR(8.84, rect2.perimeter(), 0.1);
}


TEST(RectangleArea, Square) {
	Rectangle rect1 = Rectangle(4, 4);
	Rectangle rect2 = Rectangle(20, 20);
        EXPECT_EQ(16, rect1.area());
        EXPECT_EQ(400, rect2.area());
}

TEST(RectangleArea, Rectangle) {
	Rectangle rect1 = Rectangle(4, 7);
        Rectangle rect2 = Rectangle(242, 20);
        EXPECT_EQ(28, rect1.area());
        EXPECT_EQ(4840, rect2.area());
}

TEST(RectangleArea, Float) {
	Rectangle rect1 = Rectangle(4.34, 7.69);
        Rectangle rect2 = Rectangle(2.42, 2.00000086123);
        EXPECT_NEAR(4.34*7.69, rect1.area(), 0.1);
        EXPECT_NEAR(2.42*2.0, rect2.area(), 0.1);
}

TEST(RectangleArea, DefaultConstructor) {
	Rectangle rect1 = Rectangle();
	EXPECT_EQ(0, rect1.area());
}



int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
