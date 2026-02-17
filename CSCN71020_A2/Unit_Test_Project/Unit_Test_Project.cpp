#include "pch.h"
#include "CppUnitTest.h"
#include "main.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTestProject
{
	TEST_CLASS(UnitTestProject)
	{
	public:
		
		TEST_METHOD(GetPerimeter_ValidDimensions_ReturnsCorrectPerimeter)
		{
				int length = 5;												// Arrange: Valid length for the rectangle 
				int width = 2;												// Arrange: Valid width for the rectangle
				int result = getPerimeter(&length, &width);					// Act: Call the function to get the perimeter of the rectangle
				Assert::AreEqual(14, result);								// Assert: Verify that the result is correct (Perimeter = 2 * (length + width))
		}
		TEST_METHOD(GetArea_ValidDimensions_ReturnsCorrectArea)
		{
				int length = 5;												// Arrange: Valid length for the rectangle 
				int width = 2;												// Arrange: Valid width for the rectangle
				int result = getArea(&length, &width);						// Act: Call the function to get the area of the rectangle
				Assert::AreEqual(10, result);								// Assert: Verify that the result is correct (Area = length * width)
		}
		TEST_METHOD(SetLength_UsualCase_UpdatesValue) 
		{
				int length = 1;												// Arrange: Initial length for the rectangle
				setLength(50, &length);										// Act: Call the function to set the length of the rectangle with a valid input
				Assert::AreEqual(50, length);								// Assert: Verify that the length has been updated to the new value
		}
		TEST_METHOD(SetLength_EdgeCase_HighBoundary) 
		{
				int length = 1;												// Arrange: Initial length for the rectangle
				setLength(99, &length);										// Act: Call the function to set the length of the rectangle with a valid input at the upper boundary	
				Assert::AreEqual(99, length);								// Assert: Verify that the length has been updated to the new value
		}
		TEST_METHOD(SetLength_InvalidCase_TooLow) 
		{
				int length = 1;												// Arrange: Initial length for the rectangle
				setLength(0, &length);										// Act: Call the function to set the length of the rectangle with an invalid input below the lower boundary
				Assert::AreEqual(1, length);								// Assert: Verify that the length has not been updated and remains the same
		}
		TEST_METHOD(SetWidth_UsualCase_UpdatesValue) 
		{
			int width = 1;													// Arrange: Initial width for the rectangle
			setWidth(50, &width);											// Act: Call the function to set the width of the rectangle with a valid input
			Assert::AreEqual(50, width);									// Assert: Verify that the width has been updated to the new value
		}
		TEST_METHOD(SetWidth_EdgeCase_HighBoundary) 
		{
			int width = 1;													// Arrange: Initial width for the rectangle
			setWidth(99, &width);											// Act: Call the function to set the width of the rectangle with a valid input at the upper boundary
			Assert::AreEqual(99, width);									// Assert: Verify that the width has been updated to the new value
		}
		TEST_METHOD(SetWidth_InvalidCase_TooHigh)
		{
			int width = 1;													// Arrange: Initial width for the rectangle
			setWidth(100, &width);											// Act: Call the function to set the width of the rectangle with an invalid input above the upper boundary
			Assert::AreEqual(1, width);										// Assert: Verify that the width has not been updated and remains the same
		}
	};

}
